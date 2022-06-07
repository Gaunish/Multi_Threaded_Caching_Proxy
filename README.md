# proxy-gg-ch

Welcome!

**This is homepage for Http proxy server created by Gaunish garg and Chengke Tang ! :)**

-----
INFO
----

**The project involves a multi-threaded HTTP Proxy server in C++ capable of handling REST APIs such as Get, Post, Connect. Deployed using docker.**

It connects to firefox by changing it's setting to point to server ip address, port.

* It handles concurrent requests via multiple threads effectively 
* It is Robust to external failures such as error response, corrupted response, malformed request.
* It logs the requests and errors in a text file.
