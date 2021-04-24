{% for student in site.stu %}
  {{ student.image }} @{{ student.user }} ({{ student.name }})\
  {{ student.content }}
{% endfor %}
