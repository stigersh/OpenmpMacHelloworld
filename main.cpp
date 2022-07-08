//
//  main.cpp
//  helloworld
//
//  Created by Anna Shtengel on 28.06.22.
//

#include <stdio.h>

#include <omp.h>



int main(int argc, char * argv[]) {

#pragma omp parallel

   {

       printf("Hello from thread %d/%d\n", omp_get_thread_num(), omp_get_num_threads());

   }



   return 0;

}
