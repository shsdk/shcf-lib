## ----------------------------------------------------------
## get_jira_attrib: Gets specific attrib value from a jira
##
## INPUT  : $1 - jira number (e.g ISSUE-180)
##          $2 - attribute, supported are
##                  'parent'   - parent jira for a subtask
##                  'title'    - subject or title
##                  'reporter' - who created the jira
##                  'assignee' - who is currently working on the jira
##                  'status'   - if jira is 'Closed', 'In progress' etc.
## OUTPUT : <depends on $2 value>
## ----------------------------------------------------------
