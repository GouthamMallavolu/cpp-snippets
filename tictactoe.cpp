#include<stdio.h>
#include<stdlib.h>
void
check (char a)
{
  if (a == 'X')
    {
      printf ("\n\tPlayer1 Wins\n");
    }
  else
    {
      printf ("\n\tPlayer2 Wins\n");
    }
}

main ()
{
  char a[100][100], p1 = 'X', p2 = 'O';
  int i, j, m, n, k, c = 0;
  printf ("\n\t\t----------TIC-TAC-TOE-----------\n");
  printf
    ("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf ("NOTE:\n");
  printf
    ("->In order to play this game player must need to enter the indexes for location \n");
  printf ("  in  which the player want to enter his/her symbol.\n");
  printf ("\n->  Default symbols  Player_1  -  ' X ' \n");
  printf ("                     Player_2  -  ' O ' \n");
  printf ("\nE.g:  If a player want to enter symbol at  location  a[i][j]\n");
  printf ("      then simply enter i & j values.\n\n");
  for (i = 0; i < 3; i++)
    {
      for (j = 1; j < 3; j++)
	{
	  a[i][j] = '\0';
	}
    }
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf ("      %d %d      |", i, j);
	}
      printf ("\n    --------------------------------------------\n");
    }
  printf ("     \n\n             !!! ENJOY THE GAME !!!\n\n\n");
  printf
    ("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf ("\nenter\n\t1.Start The Game\n\t2.Exit");
  printf ("\nenter your choice:");
  scanf ("%d", &k);
  if (k == 1)
    {
      system ("cls");
      printf ("\n\t\t----------TIC-TAC-TOE-----------\n");
    players:;
    retry1:;
      printf ("\nplayer_1 (enter Values for i & j) :");
      scanf ("%d%d", &m, &n);
      if (a[m][n] != '\0')
	{
	  printf
	    ("\nERROR : The place you are trying to access is probably filled\n");
	  goto retry1;
	}
      else if (m > 2 || n > 2)
	{
	  printf ("\nERROR : Invalid \n");
	  goto retry1;
	}
      else
	{
	  a[m][n] = p1;
	}
      printf ("\n");
      for (i = 0; i < 3; i++)
	{
	  for (j = 0; j < 3; j++)
	    {
	      printf ("      %c      |", a[i][j]);
	    }
	  printf ("\n    --------------------------------------\n");
	}

      c = 0;
      for (i = 0; i < 3; i++)
	{
	  for (j = 0; j < 3; j++)
	    {
	      if (a[i][j] == '\0')
		{
		  c = 1;
		}
	    }
	}

      if ((a[0][0] != '\0') && ((a[0][0] == a[1][1]) && (a[0][0] == a[2][2])))
	{
	  check (a[0][0]);
	  exit (0);
	}
      else if ((a[0][2] != '\0')
	       && ((a[0][2] == a[1][1]) && (a[0][2] == a[2][0])))
	{
	  check (a[0][2]);
	  exit (0);
	}

      for (i = 0; i < 3; i++)
	{
	  if (c != 1)
	    {
	      printf ("\n\tGame Draw!!!!\n");
	      exit (0);
	    }
	  else if ((a[i][0] != '\0')
		   && ((a[i][0] == a[i][1]) && (a[i][0] == a[i][2])))
	    {
	      check (a[i][0]);
	      exit (0);
	    }
	  else if ((a[0][i] != '\0')
		   && ((a[0][i] == a[1][i]) && (a[0][i] == a[2][i])))
	    {
	      check (a[0][i]);
	      exit (0);
	    }
	}

    retry2:;
      printf ("\nplayer_2 (enter Values for i & j) :");
      scanf ("%d%d", &m, &n);
      if (a[m][n] != '\0')
	{
	  printf
	    ("\nERROR : The place you are trying to access is probably filled\n");
	  goto retry2;
	}
      else if (m > 2 || n > 2)
	{
	  printf ("\nERROR : Invalid \n");
	  goto retry2;
	}
      else
	{
	  a[m][n] = p2;
	}
      printf ("\n");
      for (i = 0; i < 3; i++)
	{
	  for (j = 0; j < 3; j++)
	    {
	      printf ("      %c      |", a[i][j]);
	    }
	  printf ("\n    --------------------------------------\n");
	}

      if ((a[0][0] != '\0') && ((a[0][0] == a[1][1]) && (a[0][0] == a[2][2])))
	{
	  check (a[0][0]);
	  exit (0);
	}
      else if ((a[0][2] != '\0')
	       && ((a[0][2] == a[1][1]) && (a[0][2] == a[2][0])))
	{
	  check (a[0][2]);
	  exit (0);
	}
      for (int i = 0; i < 3; i++)
	{
	  if ((a[i][0] != '\0')
	      && ((a[i][0] == a[i][1]) && (a[i][0] == a[i][2])))
	    {
	      check (a[i][0]);
	      exit (0);
	    }
	  else if ((a[0][i] != '\0')
		   && ((a[0][i] == a[1][i]) && (a[0][i] == a[2][i])))
	    {
	      check (a[0][i]);
	      exit (0);
	    }
	}
      goto players;
    }
  else
    {
      exit (0);
    }
}
