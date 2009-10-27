#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <glib.h>

#include <libempathy/empathy-utils.h>

static void
test_init (int argc,
    char **argv)
{
  g_test_init (&argc, &argv, NULL);
  g_type_init ();
}

static void
test_deinit (void)
{
  ;
}

static void
test_substring (void)
{
  gchar *tmp;

  tmp = empathy_substring ("empathy", 2, 6);
  g_assert (tmp != NULL);
  g_assert (strcmp (tmp, "path") == 0);

  g_free (tmp);
}

int
main (int argc,
    char **argv)
{
  int result;

  test_init (argc, argv);

  g_test_add_func ("/utils/substring", test_substring);

  result = g_test_run ();
  test_deinit ();
  return result;
}
