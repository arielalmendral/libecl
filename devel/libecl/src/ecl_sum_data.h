#ifndef __ECL_SUM_DATA_H__
#define __ECL_SUM_DATA_H__


#ifdef __cplusplus
extern "C" {
#endif
#include <stdlib.h>
#include <time.h>
#include <time_t_vector.h>
#include <double_vector.h>
#include <stringlist.h>

typedef struct ecl_sum_data_struct ecl_sum_data_type ; 

bool                     ecl_sum_data_check_sim_time( const ecl_sum_data_type * data , time_t sim_time);
bool                     ecl_sum_data_check_sim_days( const ecl_sum_data_type * data , double sim_days);
int                      ecl_sum_data_get_num_ministep( const ecl_sum_data_type * data );
double_vector_type     * ecl_sum_data_alloc_data_vector( const ecl_sum_data_type * data , int data_index , bool report_only);
void                     ecl_sum_data_init_data_vector( const ecl_sum_data_type * data , double_vector_type * data_vector , int data_index , bool report_only);
void                     ecl_sum_data_init_time_vector( const ecl_sum_data_type * data , time_t_vector_type * time_vector , bool report_only);
time_t_vector_type     * ecl_sum_data_alloc_time_vector( const ecl_sum_data_type * data , bool report_only);
time_t                   ecl_sum_data_get_sim_start ( const ecl_sum_data_type * data ); 
time_t                   ecl_sum_data_get_sim_end   ( const ecl_sum_data_type * data ); 
double                   ecl_sum_data_get_sim_length( const ecl_sum_data_type * data ); 
void                     ecl_sum_data_summarize(const ecl_sum_data_type * data , FILE * stream);
double                   ecl_sum_data_iget( const ecl_sum_data_type * data , int internal_index , int params_index );

double                   ecl_sum_data_iget_sim_days( const ecl_sum_data_type *  , int );
time_t                   ecl_sum_data_iget_sim_time( const ecl_sum_data_type *  , int );


bool                     ecl_sum_data_has_report_step(const ecl_sum_data_type *  , int );

int                      ecl_sum_data_iget_reportstep(const ecl_sum_data_type * data , int internal);
int                      ecl_sum_data_get_reportstep(const ecl_sum_data_type * data , int ministep);
ecl_sum_data_type      * ecl_sum_data_fread_alloc(const ecl_smspec_type *  , const stringlist_type * filelist , bool include_restart);
void                     ecl_sum_data_free( ecl_sum_data_type * );
int                      ecl_sum_data_get_last_report_step( const ecl_sum_data_type * data );
int                      ecl_sum_data_get_first_report_step( const ecl_sum_data_type * data );
int                      ecl_sum_data_get_first_ministep( const ecl_sum_data_type * data );
int                      ecl_sum_data_get_last_ministep( const ecl_sum_data_type * data );

double                   ecl_sum_data_get_from_sim_time( const ecl_sum_data_type * data , time_t sim_time , int params_index);
double                   ecl_sum_data_get_from_sim_days( const ecl_sum_data_type * data , double sim_days , int params_index);

int                      ecl_sum_data_get_length( const ecl_sum_data_type * data );
int                      ecl_sum_data_iget_report_step(const ecl_sum_data_type * data , int internal_index);

int                      ecl_sum_data_iget_report_end( const ecl_sum_data_type * data , int report_step );
int                      ecl_sum_data_iget_report_start( const ecl_sum_data_type * data , int report_step );


#ifdef __cplusplus
}
#endif
#endif
