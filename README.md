{% for student in site.stu %}
  {{ student.image }} <a href= "http://github.com/{{ student.user }}">@{{ student.user }}</a> ({{ student.name }})\
  {{ student.content }}
{% endfor %}
