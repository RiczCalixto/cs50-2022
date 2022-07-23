#include <cs50.h>
#include <stdio.h>

void print_n_times(int times, char character);

int main(void)
{
  int height;
  do
  {
    height = get_int("Height (beteern 1 and 8): ");
  } while (height < 1 || height > 8);

  for (int row = 1; row <= height; row++)
  {
    print_n_times(height - row, ' ');
    print_n_times(row, '#');
    print_n_times(1, ' ');
    print_n_times(row, '#');
    print_n_times(height - row, ' ');
    printf("\n");
  }
}

void print_n_times(int n_times, char character)
{
  for (int start = 0; start < n_times; start++)
  {
    printf("%c", character);
  }
}