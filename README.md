# Project E

## Introduction
Our teammates will finish all the tasks in issue directory in order to build a usable
Git repository with nice design on structure.
## Code

## Contributors
{% for student in site.stu %}
  ![Profile Picture]({{ student.image }}) <a href= "http://github.com/{{ student.user }}">@{{ student.user }}</a> ({{ student.name }})
  {{ student.content }}
{% endfor %}
