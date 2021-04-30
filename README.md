# Project E

## Introduction
Our teammates will finish all the tasks in issue directory in order to build a usable
Git repository with nice design on structure.
## Code
```c 
{% include_relative code.c %} {% endhighlight %}
```

![CI](https://github.com/csci3251-2021/project-team-e/actions/workflows/main.yml/badge.svg)

## Contributors
{% for student in site.stu %}
  ![Profile Picture]({{ student.image }}) <a href= "http://github.com/{{ student.user }}">@{{ student.user }}</a> ({{ student.name }})
  {{ student.content }}
{% endfor %}
