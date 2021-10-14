/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niduches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:52:10 by niduches          #+#    #+#             */
/*   Updated: 2021/09/13 16:18:08 by niduches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ssl.h"

uint8_t Fu8__structure_argument_init(argument_t *ptr_sstc_pssd_argument)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the structure argument is correctly pointing passed as an argument of the function
    */
    if( ptr_sstc_pssd_argument == NULL)
        {
        /**
        * Treat the case when the structure argument is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure argument is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure argument passed in argument of the function is already initialized
    */
    if((ptr_sstc_pssd_argument->u8_global_status_ & FIRST_BIT) != FALSE)
        {
        /**
        * Treat the case when the structure argument passed in argument of the function is already initialized
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument passed in argument of the function is already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument passed in argument of the function is already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure argument passed in argument of the function is not already initialized as expected
        */
        }

    /**
    * Creation of local variable
    */
    uint64_t u64_lcl_cnt;
    uint8_t  u8_lcl_cnt;

    /**
    * Initialization of local variable
    */
    u64_lcl_cnt = 0;
    u8_lcl_cnt  = 0;

    /**
    * Setting all the value of the global status of the structure to false
    */
    ptr_sstc_pssd_argument->u8_global_status_ = 0;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_FIRST_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_SECOND_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_THIRD_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_FOURTH_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_FIFTH_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_SIXTH_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_SEVENTH_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_EIGHTH_BIT;

    /**
    * Reseting all the value of the options in the structure argument passed in argument of the function
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < SIMPLE_OPTION_NUMBER)
        {
        ptr_sstc_pssd_argument->ptr_u8_simple_options_[u8_lcl_cnt] = FALSE;

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Reseting all the value of the argument options set in the structure argument passed in argument of the function
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < ARGUMENT_OPTION_NUMBER)
        {
        ptr_sstc_pssd_argument->ptr_u8_argument_options_[u8_lcl_cnt] = FALSE;

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            return (RETURN_FAILURE);
            }
        }

    /**
    * Allocating all the argument string of the static array of string to an empty string in the structure argument passed in argument of the function
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < ARGUMENT_OPTION_NUMBER)
        {
        /**
        * Allocating the actual argument string of the static array of string in the structure argument passed in argument of the function to an empty string
        */
        ptr_sstc_pssd_argument->dbl_ptr_u8_argument_option_value_str_[u8_lcl_cnt] = NULL;
        ptr_sstc_pssd_argument->dbl_ptr_u8_argument_option_value_str_[u8_lcl_cnt] = (uint8_t *) malloc(sizeof(uint8_t) * 1);

        /**
        * Check if the allocation of the actual argument string of the static array of string in the structure argument passed in argument of the function failed
        */
        if(ptr_sstc_pssd_argument->dbl_ptr_u8_argument_option_value_str_[u8_lcl_cnt] == NULL)
            {
            /**
            * Treat the case when the allocation of the actual argument string of the static array of string in the structure argument passed in argument of the function failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the allocation of the actual argument string of the static array of string in the structure argument passed in argument of the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the allocation of the actual argument string of the static array of string in the structure argument passed in argument of the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the allocation of the actual argument string of the static array of string in the structure argument passed in argument of the function succeeded
            */

            /**
            * Setting the first character of the actual argument string of the static array of string in the structure argument passed in argument of the function to nil to set it a an empty string
            */
            ptr_sstc_pssd_argument->dbl_ptr_u8_argument_option_value_str_[u8_lcl_cnt][0] = NIL;
            }

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Allocating the dynamique array of file path in the structure argument passed in argument of the function
    */
    ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_ = NULL;
    ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_ = (uint8_t **) malloc(sizeof(uint8_t *) *  1);

    /**
    * Check if the allocation of the the dynamique array of file path in the structure argument passed in argument of the function failed
    */
    if(ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_ == NULL)
        {
        /**
        * Treat the case when the allocation of the the dynamique array of file path in the structure argument passed in argument of the function failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the allocation of the the dynamique array of file path in the structure argument passed in argument of the function failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the allocation of the the dynamique array of file path in the structure argument passed in argument of the function failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the allocation of the the dynamique array of file path in the structure argument passed in argument of the function succeeded
        */

        /**
        * Setting the first path of the dynamique array of file path in the structure argument passed in argument of the function to nil
        */
        ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_[0]    = NULL;
        ptr_sstc_pssd_argument->u64_number_of_file_in_argument_ = 0;
        }

    /**
    * Setting the commnad type in the structure argument passed in argument of the function to default value no command
    */
    ptr_sstc_pssd_argument->e_command_type_ = NO_COMMAND;

    /**
    * Setting all the element of the input buffer of the structure argument passed in argument of the function to zero
    */
    u64_lcl_cnt = 0;
    while(u64_lcl_cnt < LIBFT_BUFFER_SIZE)
        {
        ptr_sstc_pssd_argument->u8_input_buffer_[u64_lcl_cnt] = 0;

        /**
        * Checking for overflow
        */
        if(u64_lcl_cnt < UINT64_MAX)
            {
            u64_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;33mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Setting the length of the input buffer of the structure argument passed in argument of the function to zero
    */
    ptr_sstc_pssd_argument->u64_length_of_input_buffer_ = 0;

    /**
    * Setting the structure argument to initialized
    */
    ptr_sstc_pssd_argument->u8_global_status_ |= FIRST_BIT;

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__structure_argument_close(argument_t *ptr_sstc_pssd_argument)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the structure argument is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_argument == NULL)
        {
        /**
        * Treat the case when the structure argument is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure argument is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure argument passed in argument of the function is not already initialized
    */
    if((ptr_sstc_pssd_argument->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure argument passed in argument of the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument passed in argument of the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument passed in argument of the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure argument passed in argument of the function is already initialized as expected
        */
        }

    /**
    * Creation of local variable
    */
    uint64_t u64_lcl_cnt;
    uint8_t  u8_lcl_cnt;

    /**
    * Initialization of local variable
    */
    u64_lcl_cnt = 0;
    u8_lcl_cnt  = 0;

    /**
    * Reseting all the value of the options in the structure argument passed in argument of the function
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < SIMPLE_OPTION_NUMBER)
        {
        ptr_sstc_pssd_argument->ptr_u8_simple_options_[u8_lcl_cnt] = FALSE;

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Reseting all the value of the argument options set in the structure argument passed in argument of the function
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < ARGUMENT_OPTION_NUMBER)
        {
        ptr_sstc_pssd_argument->ptr_u8_argument_options_[u8_lcl_cnt] = FALSE;

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            return (RETURN_FAILURE);
            }
        }

    /**
    * Freeing and reseting to null all the argument string of the static array of string in the structure argument passed in argument of the function
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < ARGUMENT_OPTION_NUMBER)
        {
        /**
        * Freeing and reseting to null the actual argument string of the static array of string in the structure argument passed in argument of the function
        */
        (void) free(ptr_sstc_pssd_argument->dbl_ptr_u8_argument_option_value_str_[u8_lcl_cnt]);
        ptr_sstc_pssd_argument->dbl_ptr_u8_argument_option_value_str_[u8_lcl_cnt] = NULL;

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Freeing and setting to null all the file path in the dynamique array in the structure argument passed in argument of the function
    */
    u64_lcl_cnt = 0;
    while(u64_lcl_cnt < ptr_sstc_pssd_argument->u64_number_of_file_in_argument_ && ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_[u64_lcl_cnt] != NULL)
        {
        (void) free(ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_[u64_lcl_cnt]);
        ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_[u64_lcl_cnt] = NULL;

        /**
        * Checking for overflow
        */
        if(u64_lcl_cnt < UINT64_MAX)
            {
            u64_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Freeing and setting to null the dynamique array of file path in the structure argument passed in argument of the function
    */
    (void) free(ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_);
    ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_       = NULL;
    ptr_sstc_pssd_argument->u64_number_of_file_in_argument_ = 0;

    /**
    * Setting the commnad type in the structure argument passed in argument of the function to default value no command
    */
    ptr_sstc_pssd_argument->e_command_type_ = NO_COMMAND;

    /**
    * Setting all the element of the input buffer of the structure argument passed in argument of the function to zero
    */
    u64_lcl_cnt = 0;
    while(u64_lcl_cnt < LIBFT_BUFFER_SIZE)
        {
        ptr_sstc_pssd_argument->u8_input_buffer_[u64_lcl_cnt] = 0;

        /**
        * Checking for overflow
        */
        if(u64_lcl_cnt < UINT64_MAX)
            {
            u64_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;33mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Setting the length of the input buffer of the structure argument passed in argument of the function to zero
    */
    ptr_sstc_pssd_argument->u64_length_of_input_buffer_ = 0;

    /**
    * Setting all the value of the global status of the structure to false
    */
    ptr_sstc_pssd_argument->u8_global_status_ = 0;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_FIRST_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_SECOND_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_THIRD_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_FOURTH_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_FIFTH_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_SIXTH_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_SEVENTH_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_EIGHTH_BIT;

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__structure_argument_reset(argument_t *ptr_sstc_pssd_argument)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the structure argument is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_argument == NULL)
        {
        /**
        * Treat the case when the structure argument is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure argument is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure argument passed in argument of the function is not already initialized
    */
    if((ptr_sstc_pssd_argument->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure argument passed in argument of the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument passed in argument of the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument passed in argument of the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure argument passed in argument of the function is already initialized as expected
        */
        }

    /**
    * Creation of local variable
    */
    uint64_t u64_lcl_cnt;
    uint8_t  u8_lcl_cnt;

    /**
    * Initialization of local variable
    */
    u64_lcl_cnt = 0;
    u8_lcl_cnt  = 0;

    /**
    * Reseting all the value of the options in the structure argument passed in argument of the function
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < SIMPLE_OPTION_NUMBER)
        {
        ptr_sstc_pssd_argument->ptr_u8_simple_options_[u8_lcl_cnt] = FALSE;

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Reseting all the value of the argument options set in the structure argument passed in argument of the function
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < ARGUMENT_OPTION_NUMBER)
        {
        ptr_sstc_pssd_argument->ptr_u8_argument_options_[u8_lcl_cnt] = FALSE;

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            return (RETURN_FAILURE);
            }
        }

    /**
    * Freeing and reseting to null all the argument string of the static array of string in the structure argument passed in argument of the function
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < ARGUMENT_OPTION_NUMBER)
        {
        /**
        * Reallocating the actual argument string of the static array of string in the structure argument passed in argument of the function
        */
        ptr_sstc_pssd_argument->dbl_ptr_u8_argument_option_value_str_[u8_lcl_cnt] = (uint8_t *) realloc(ptr_sstc_pssd_argument->dbl_ptr_u8_argument_option_value_str_[u8_lcl_cnt], sizeof(uint8_t) * 1);

        /**
        * Check if the reallocation of the actual argument string of the static array of string in the structure argument passed in argument of the function failed
        */
        if(ptr_sstc_pssd_argument->dbl_ptr_u8_argument_option_value_str_[u8_lcl_cnt] == NULL)
            {
            /**
            * Treat the case when the reallocation of the actual argument string of the static array of string in the structure argument passed in argument of the function failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the actual argument string of the static array of string in the structure argument passed in argument of the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;33mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the reallocation of the actual argument string of the static array of string in the structure argument passed in argument of the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the reallocation of the actual argument string of the static array of string in the structure argument passed in argument of the function succeeded
            */

            ptr_sstc_pssd_argument->dbl_ptr_u8_argument_option_value_str_[u8_lcl_cnt][0] = '\0';
            }

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Freeing and setting to null all the file path in the dynamique array in the structure argument passed in argument of the function
    */
    u64_lcl_cnt = 0;
    while(u64_lcl_cnt < ptr_sstc_pssd_argument->u64_number_of_file_in_argument_ && ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_[u64_lcl_cnt] != NULL)
        {
        (void) free(ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_[u64_lcl_cnt]);
        ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_[u64_lcl_cnt] = NULL;

        /**
        * Checking for overflow
        */
        if(u64_lcl_cnt < UINT64_MAX)
            {
            u64_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Reallocating the dynamique array of file path in the structure argument passed in argument of the function
    */
    ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_ = (uint8_t **) realloc(ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_, sizeof(uint8_t *) * 1);

    /**
    * Check if the reallocation of the dynamique array of file path in the structure argument passed in argument of the function failed
    */
    if(ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_ == NULL)
        {
        /**
        * Treat the case when the reallocation of the dynamique array of file path in the structure argument passed in argument of the function failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the dynamique array of file path in the structure argument passed in argument of the function failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;33mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the reallocation of the dynamique array of file path in the structure argument passed in argument of the function failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the reallocation of the dynamique array of file path in the structure argument passed in argument of the function succeeded
        */

        ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_[0] = NULL;
        }

    ptr_sstc_pssd_argument->u64_number_of_file_in_argument_ = 0;

    /**
    * Setting the commnad type in the structure argument passed in argument of the function to default value no command
    */
    ptr_sstc_pssd_argument->e_command_type_ = NO_COMMAND;

    /**
    * Setting all the element of the input buffer of the structure argument passed in argument of the function to zero
    */
    u64_lcl_cnt = 0;
    while(u64_lcl_cnt < LIBFT_BUFFER_SIZE)
        {
        ptr_sstc_pssd_argument->u8_input_buffer_[u64_lcl_cnt] = 0;

        /**
        * Checking for overflow
        */
        if(u64_lcl_cnt < UINT64_MAX)
            {
            u64_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;33mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Setting the length of the input buffer of the structure argument passed in argument of the function to zero
    */
    ptr_sstc_pssd_argument->u64_length_of_input_buffer_ = 0;

    /**
    * Setting the structure argument to initialized
    */
    ptr_sstc_pssd_argument->u8_global_status_ |= FIRST_BIT;

    return (RETURN_SUCCESS);
    }

void Fv__structure_argument_display(argument_t *ptr_sstc_pssd_argument)
    {
    /**
    * Assertion of argument
    */

    #ifndef DEVELOPEMENT
    return ;
    #endif

    #ifdef DEMO
    return ;
    #endif

    #ifdef PRODUCTION
    return ;
    #endif

    /**
    * Check if the structure argument is correctly pointing passed as an argument of the function
    */
    if( ptr_sstc_pssd_argument == NULL)
        {
        /**
        * Treat the case when the structure argument is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return to indicate the structure argument is not correctly pointing passed as an argument of the function
        */
        return ;
        }
    else
        {
        /**
        * Treat the case when the structure argument is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure argument passed in argument of the function is not already initialized
    */
    if((ptr_sstc_pssd_argument->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure argument passed in argument of the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument passed in argument of the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return to indicate the structure argument passed in argument of the function is not already initialized
        */
        return ;
        }
    else
        {
        /**
        * Treat the case when  the structure argument passed in argument of the function is already initialized as expected
        */
        }

    /**
    * Creation of local variable
    */
    uint64_t u64_lcl_cnt;
    uint8_t  u8_lcl_cnt;

    /**
    * Initialization of local variable
    */
    u64_lcl_cnt = 0;
    u8_lcl_cnt  = 0;

    fprintf(stdout, "    ***********************************************\n");
    fprintf(stdout, "    *              STRUCTURE ARGUMENT             *\n");
    fprintf(stdout, "    ***********************************************\n\n");

    /**
    * Display all the value of the global status of the structure argument passed in argument of the function
    */
    fprintf(stdout, "GLOBAL STATUS:\n");
    if((ptr_sstc_pssd_argument->u8_global_status_ & FIRST_BIT) != FALSE)
        {
        fprintf(stdout, "    FIRST BIT:     \033[1;93;40mset\033[0m structure initialized\n");
        }
    else
        {
        fprintf(stdout, "    FIRST BIT:     structure \033[1;95;40mNOT\033[0m initialized\n");
        }
    if((ptr_sstc_pssd_argument->u8_global_status_ & SECOND_BIT) != FALSE)
        {
        fprintf(stdout, "    SECOND BIT:    \033[1;93;40mset error occure\033[0m\n");
        }
    else
        {
        fprintf(stdout, "    SECOND BIT:    \033[1;95;40mNOT\033[0m set no error occure\n");
        }
    if((ptr_sstc_pssd_argument->u8_global_status_ & THIRD_BIT) != FALSE)
        {
        fprintf(stdout, "    THIRD BIT:     \033[1;93;40mset\033[0m\n");
        }
    else
        {
        fprintf(stdout, "    THIRD BIT:     \033[1;95;40mNOT\033[0m set\n");
        }
    if((ptr_sstc_pssd_argument->u8_global_status_ & FOURTH_BIT) != FALSE)
        {
        fprintf(stdout, "    FOURTH BIT:    \033[1;93;40mset\033[0m\n");
        }
    else
        {
        fprintf(stdout, "    FOURTH BIT:    \033[1;95;40mNOT\033[0m set\n");
        }
    if((ptr_sstc_pssd_argument->u8_global_status_ & FIFTH_BIT) != FALSE)
        {
        fprintf(stdout, "    FIFTH BIT:     \033[1;93;40mset\033[0m\n");
        }
    else
        {
        fprintf(stdout, "    FIFTH BIT:     \033[1;95;40mNOT\033[0m set\n");
        }
    if((ptr_sstc_pssd_argument->u8_global_status_ & SIXTH_BIT) != FALSE)
        {
        fprintf(stdout, "    SIXTH BIT:     \033[1;93;40mset\033[0m\n");
        }
    else
        {
        fprintf(stdout, "    SIXTH BIT:     \033[1;95;40mNOT\033[0m set\n");
        }
    if((ptr_sstc_pssd_argument->u8_global_status_ & SEVENTH_BIT) != FALSE)
        {
        fprintf(stdout, "    SEVENTH BIT:   \033[1;93;40mset\033[0m\n");
        }
    else
        {
        fprintf(stdout, "    SEVENTH BIT:   \033[1;95;40mNOT\033[0m set\n");
        }
    if((ptr_sstc_pssd_argument->u8_global_status_ & EIGHTH_BIT) != FALSE)
        {
        fprintf(stdout, "    EIGHTH BIT:    \033[1;93;40mset\033[0m\n");
        }
    else
        {
        fprintf(stdout, "    EIGHTH BIT:    \033[1;95;40mNOT\033[0m set\n");
        }

    fprintf(stdout, "\n");

    /**
    * Display all the options set in the structure argument passed in argument of the function
    */
    fprintf(stdout, "OPTIONS:\n");
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < SIMPLE_OPTION_NUMBER)
        {
        /**
        * Check if the actual option in the structure argument passed in argument of the function is set
        */
        if(ptr_sstc_pssd_argument->ptr_u8_simple_options_[u8_lcl_cnt] != FALSE)
            {
            /**
            * Treat the case when the actual option in the structure argument passed in argument of the function is set
            */

            fprintf(stdout, "    The option [%s] is \033[1;93;40mset\033[0m\n", simple_options[u8_lcl_cnt]);
            }
        else
            {
            /**
            * Treat the case when the actual option in the structure argument passed in argument of the function is not set
            */

            fprintf(stdout, "    The option [%s] is \033[1;95;40mNOT\033[0m set\n", simple_options[u8_lcl_cnt]);
            }

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            return ;
            }
        }

    fprintf(stdout, "\n");

    /**
    * Display all the argument options set in the structure argument passed in argument of the function
    */
    fprintf(stdout, "ARGUMENT OPTIONS:\n");
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < ARGUMENT_OPTION_NUMBER)
        {
        /**
        * Check if the actual argument option in the structure argument passed in argument of the function is set
        */
        if(ptr_sstc_pssd_argument->ptr_u8_argument_options_[u8_lcl_cnt] != FALSE)
            {
            /**
            * Treat the case when the actual argument option in the structure argument passed in argument of the function is set
            */

            fprintf(stdout, "    The argument option [%s] is \033[1;93;40mset\033[0m\n", argument_options[u8_lcl_cnt]);
            }
        else
            {
            /**
            * Treat the case when the actual argument option in the structure argument passed in argument of the function is not set
            */

            fprintf(stdout, "    The argument option [%s] is \033[1;95;40mNOT\033[0m set\n", argument_options[u8_lcl_cnt]);
            }

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            return ;
            }
        }

    fprintf(stdout, "\n");

    /**
    * Display all the argument string of the static array of string in the structure argument passed in argument of the function
    */
    fprintf(stdout, "ARGUMENT OPTIONS VALUE:\n");
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < ARGUMENT_OPTION_NUMBER)
        {
        /**
        * Display the actual argument string of the static array of string in the structure argument passed in argument of the function
        */

        /**
        * Check if the actual argument string of the static array of string in the structure argument passed in argument of the function is null
        */
        if(ptr_sstc_pssd_argument->dbl_ptr_u8_argument_option_value_str_[u8_lcl_cnt] == NULL)
            {
            /**
            * Treat the case when the actual argument string of the static array of string in the structure argument passed in argument of the function is null
            */

            fprintf(stdout, "    [%s] VALUE STR: \033[1;93;40m(nill)\033[0m\n", argument_options[u8_lcl_cnt]);
            }
        else
            {
            /**
            * Treat the case when the actual argument string of the static array of string in the structure argument passed in argument of the function is not null
            */

            fprintf(stdout, "    [%s] VALUE STR: \033[1;95;40m[\033[0m%s\033[1;95;40m]\033[0m\n", argument_options[u8_lcl_cnt], ptr_sstc_pssd_argument->dbl_ptr_u8_argument_option_value_str_[u8_lcl_cnt]);
            }

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return to indicate the counter variable overflow
            */
            return ;
            }
        }

    fprintf(stdout, "\n");

    /**
    * Check if the dynamique array of file path in the structure argument passed in argument of the function is null
    */
    if(ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_ == NULL)
        {
        /**
        * Treat the case when the dynamique array of file path in the structure argument passed in argument of the function is null
        */

        fprintf(stdout, "FILE PATH ARRAY:     \033[1;95;40mNULL\033[0m\n");
        }
    else
        {
        /**
        * Treat the case when the dynamique array of file path in the structure argument passed in argument of the function is not null
        */

        fprintf(stdout, "FILE PATH ARRAY:\n");

        /**
        * Display all the file path of the dynamique array of file path in the structure argument passed in argument of the function
        */
        u64_lcl_cnt = 0;
        while(u64_lcl_cnt < ptr_sstc_pssd_argument->u64_number_of_file_in_argument_ && ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_[u64_lcl_cnt] != NULL)
            {
            fprintf(stdout, "    FILE PATH STR [%lu]: \033[1;95;40m[\033[0m%s\033[1;95;40m]\033[0m\n", u64_lcl_cnt, ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_[u64_lcl_cnt]);

            /**
            * Checking for overflow
            */
            if(u64_lcl_cnt < UINT64_MAX)
                {
                u64_lcl_cnt++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return to indicate the counter variable overflow
                */
                return ;
                }
            }
        }

    fprintf(stdout, "\n");

    fprintf(stdout, "FILE PATH ARRAY LENGTH: [\033[1;95;40m%lu\033[0m]\n", ptr_sstc_pssd_argument->u64_number_of_file_in_argument_);

    fprintf(stdout, "\n");

    /**
    * Check if no command in set in the structure argument passed in argument of the function
    */
    if(ptr_sstc_pssd_argument->e_command_type_ == NO_COMMAND)
        {
        /**
        * Treat the case when no command in set in the structure argument passed in argument of the function
        */

        fprintf(stdout, "COMMAND \033[1;95;40mNOT\033[0m set\n");
        }
    else
        {
        /**
        * Treat the case when a command in set in the structure argument passed in argument of the function
        */

        /**
        * Check if the command in the structure argument passed in argument of the function does not exist
        */
        if(ptr_sstc_pssd_argument->e_command_type_ >= COMMAND_NUMBER)
            {
            /**
            * Treat the case when the command in the structure argument passed in argument of the function does not exist
            */

            fprintf(stdout, "COMMAND \033[1;91;40mNOT EXIST\033[0m\n");
            }
        else
            {
            /**
            * Treat the case when the command in the structure argument passed in argument of the function exist
            */

            fprintf(stdout, "COMMAND: \033[1;95;40m%s\033[0m\n", command_name[ptr_sstc_pssd_argument->e_command_type_]);
            }
        }

    /**
    * Setting all the element of the input buffer of the structure argument passed in argument of the function to zero
    */
    fprintf(stdout, "\n");
    fprintf(stdout, "INPUT BUFFER \033[1;95;40m[\033[0m");
    u64_lcl_cnt = 0;
    while(u64_lcl_cnt < ptr_sstc_pssd_argument->u64_length_of_input_buffer_)
        {
        /**
        * Check if the actual character of the input buffer of the structure argument passed in argument of the function is displayable
        */
        if((ptr_sstc_pssd_argument->u8_input_buffer_[u64_lcl_cnt] >= 32) && (ptr_sstc_pssd_argument->u8_input_buffer_[u64_lcl_cnt] <= 127))
            {
            /**
            * Treat the case when the actual character of the input buffer of the structure argument passed in argument of the function is displayable
            */

            printf("%c", ptr_sstc_pssd_argument->u8_input_buffer_[u64_lcl_cnt]);
            }
        else
            {
            /**
            * Treat the case when the actual character of the input buffer of the structure argument passed in argument of the function is not displayable
            */

            printf("\033[1;95;40m\\%X\033[0m", ptr_sstc_pssd_argument->u8_input_buffer_[u64_lcl_cnt]);
            }

        /**
        * Checking for overflow
        */
        if(u64_lcl_cnt < UINT64_MAX)
            {
            u64_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;33mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return;
            }
        }
    fprintf(stdout, "\033[1;95;40m]\033[0m\n");

    /**
    * Display the length of the input buffer of the structure argument passed in argument of the function
    */
    fprintf(stdout, "\n");

    fprintf(stdout, "INPUT BUFFER LENGTH: [\033[1;95;40m%lu\033[0m]\n", ptr_sstc_pssd_argument->u64_length_of_input_buffer_);

    fprintf(stdout, "\n    ***********************************************\n");
    fprintf(stdout, "    *            END STRUCTURE ARGUMENT           *\n");
    fprintf(stdout, "    ***********************************************\n");
    }

uint8_t Fu8__get_first_word_from_string(uint8_t *ptr_u8_pssd_string, uint8_t **dbl_ptr_u8_pssd_word_to_return_str, uint64_t *ptr_u64_pssd_position_in_string)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the string is correctly pointing passed as an argument of the function
    */
    if(ptr_u8_pssd_string == NULL)
        {
        /**
        * Treat the case when the string is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the string is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;33mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the string is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the string is correctly pointing passed as an argument of the function
        */
        } 

    /**
    * Check if the address of the word to return is correctly pointing passed as an argument of the function
    */
    if(dbl_ptr_u8_pssd_word_to_return_str == NULL)
        {
        /**
        * Treat the case when the address of the word to return is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the address of the word to return is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;33mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the address of the word to return is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the address of the word to return is correctly pointing passed as an argument of the function
        */
        } 

    /**
    * Check if the address of the position in the string to return is correctly pointing passed as an argument of the function
    */
    if(ptr_u64_pssd_position_in_string == NULL)
        {
        /**
        * Treat the case when the address of the position in the string to return is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the address of the position in the string to return is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;33mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the address of the position in the string to return is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the address of the position in the string to return is correctly pointing passed as an argument of the function
        */
        } 

    /**
    * Creation of local variable
    */
    uint64_t u64_lcl_cnt;
    uint64_t u64_lcl_position_of_first_character_of_word;
    uint64_t u64_lcl_length_of_word;

    /**
    * Initialization of local variable
    */
    u64_lcl_cnt                                 = 0;
    u64_lcl_position_of_first_character_of_word = 0;
    u64_lcl_length_of_word                      = 0;

    /**
    * Setting to null the word to return
    */
    (*dbl_ptr_u8_pssd_word_to_return_str) = NULL;

    /**
    * Setting to zero the position in string to return
    */
    (*ptr_u64_pssd_position_in_string) = 0;

    /**
    * Passing all the space character at the start of the string passed in argument of the function
    */ 
    u64_lcl_cnt = 0;
    while((ft_isspace(ptr_u8_pssd_string[u64_lcl_cnt]) != FALSE) && (ptr_u8_pssd_string[u64_lcl_cnt] != '\0'))
        {
        /**
        * Checking for overflow
        */
        if(u64_lcl_cnt < UINT64_MAX)
            {
            u64_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;33mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */ 
            return (RETURN_FAILURE);
            } 
        }

    /**
    * Check if the end of string is reached before meeting the first zord in the string passed in argument of the function
    */
    if(ptr_u8_pssd_string[u64_lcl_cnt] == '\0')
        {
        /**
        * Treat the case when the end of string is reached before meeting the first zord in the string passed in argument of the function
        */

        /**
        * Setting to null the word to return
        */
        (*dbl_ptr_u8_pssd_word_to_return_str) = NULL;

        return (RETURN_SUCCESS);
        }
    else
        {
        /**
        * Treat the case when the end of string is not reached before meeting the first zord in the string passed in argument of the function
        */
        } 

    /**
    * Saving the position of the first character of the first word of the string passed in argument of the function
    */
    u64_lcl_position_of_first_character_of_word = u64_lcl_cnt;

    /**
    * Getting the length of the first word of the string in the string passed in argument of the function
    */ 
    u64_lcl_length_of_word = 0;
    while((ft_isspace(ptr_u8_pssd_string[u64_lcl_cnt]) == FALSE) && (ptr_u8_pssd_string[u64_lcl_cnt] != '\0'))
        {
        /**
        * Checking for overflow
        */
        if(u64_lcl_length_of_word < UINT64_MAX)
            {
            u64_lcl_length_of_word++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;33mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */ 
            return (RETURN_FAILURE);
            } 

        /**
        * Checking for overflow
        */
        if(u64_lcl_cnt < UINT64_MAX)
            {
            u64_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;33mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */ 
            return (RETURN_FAILURE);
            } 
        }

    /**
    * Check if the end of string is reached before meeting the first zord in the string passed in argument of the function
    */
    if(u64_lcl_length_of_word == 0)
        {
        /**
        * Treat the case when the end of string is reached before meeting the first zord in the string passed in argument of the function
        */

        /**
        * Setting to null the word to return
        */
        (*dbl_ptr_u8_pssd_word_to_return_str) = NULL;

        return (RETURN_SUCCESS);
        }
    else
        {
        /**
        * Treat the case when the end of string is not reached before meeting the first zord in the string passed in argument of the function
        */
        }

    /**
    * Passing all the space character after the first word of the string passed in argument of the function
    */ 
    while((ft_isspace(ptr_u8_pssd_string[u64_lcl_cnt]) != FALSE) && (ptr_u8_pssd_string[u64_lcl_cnt] != '\0'))
        {
        /**
        * Checking for overflow
        */
        if(u64_lcl_cnt < UINT64_MAX)
            {
            u64_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;33mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */ 
            return (RETURN_FAILURE);
            } 
        }

    /**
    * Setting the position in string to return to the actual position in the string passed in argument of the function
    */
    (*ptr_u64_pssd_position_in_string) = u64_lcl_cnt;

    /**
    * Check if the length of the first word in the string passed in argument of the function is at the maximum size
    */
    if(u64_lcl_length_of_word == UINT64_MAX)
        {
        /**
        * Treat the case when the length of the first word in the string passed in argument of the function is at the maximum size
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the length of the first word in the string passed in argument of the function is at the maximum size\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;33mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the length of the first word in the string passed in argument of the function is at the maximum size
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the length of the first word in the string passed in argument of the function is not at the maximum size
        */
        } 

    /**
    * Allocating the word to return
    */
    (*dbl_ptr_u8_pssd_word_to_return_str) = NULL;
    (*dbl_ptr_u8_pssd_word_to_return_str) = (uint8_t *) malloc(sizeof(uint8_t) * (u64_lcl_length_of_word + 1));

    /**
    * Check if the allocation of the word to return failed
    */
    if((*dbl_ptr_u8_pssd_word_to_return_str) == NULL)
        {
        /**
        * Treat the case when the allocation of the word to return failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the word to return failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;33mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the allocation of the word to return failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the allocation of the word to return succeeded
        */

        /**
        * Setting the first character of the word to return to nil
        */ 
        (*dbl_ptr_u8_pssd_word_to_return_str)[0] = '\0';
        }

    /**
    * Copying the first word in the string passed in argument of the function to the new allocated word to return
    */
    u64_lcl_cnt = 0;
    while(u64_lcl_cnt < u64_lcl_length_of_word)
        {
        (*dbl_ptr_u8_pssd_word_to_return_str)[u64_lcl_cnt] = (ptr_u8_pssd_string + u64_lcl_position_of_first_character_of_word)[u64_lcl_cnt];

        /**
        * Checking for overflow
        */
        if(u64_lcl_cnt < UINT64_MAX)
            {
            u64_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;33mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */ 
            return (RETURN_FAILURE);
            } 
        }

    /**
    * Setting the last character of the new allocated word to return to nil
    */
    (*dbl_ptr_u8_pssd_word_to_return_str)[u64_lcl_cnt] = '\0';

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__load_argument_data_from_string(argument_t *ptr_sstc_pssd_argument, uint8_t *ptr_u8_pssd_command_str, uint8_t *ptr_u8_pssd_command_exist)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the structure argument is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_argument == NULL)
        {
        /**
        * Treat the case when the structure argument is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure argument is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure argument passed in argument of the function is not already initialized
    */
    if((ptr_sstc_pssd_argument->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure argument passed in argument of the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument passed in argument of the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument passed in argument of the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure argument passed in argument of the function is already initialized as expected
        */
        }

    /**
    * Check if the string command is correctly pointing passed as an argument of the function
    */
    if(ptr_u8_pssd_command_str == NULL)
        {
        /**
        * Treat the case when the string command is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the string command is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;33mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the string command is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the string command is correctly pointing passed as an argument of the function
        */
        } 

    /**
    * Check if the pointer of status of the command is correctly pointing passed as an argument of the function
    */
    if(ptr_u8_pssd_command_exist == NULL)
        {
        /**
        * Treat the case when the pointer of status of the command is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer of status of the command is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;33mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer of status of the command is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer of status of the command is correctly pointing passed as an argument of the function
        */
        } 

    /**
    * Creation of local variable
    */
    enum e_argument_option_list e_argument_option_type;
    enum e_command_list         e_command_type;
    enum e_simple_option_list   e_option_type;
    int32_t                     s32_lcl_return_from_comparaison;
    uint64_t                    u64_lcl_position_in_command;
    uint8_t                     u8_lcl_cnt;
    uint8_t                     u8_lcl_return_from_function;
    uint8_t                    *ptr_u8_lcl_word_str;

    /**
    * Initialization of local variable
    */
    e_argument_option_type          = NO_ARGUMENT_OPTION;
    e_command_type                  = NO_COMMAND;
    e_option_type                   = NO_SIMPLE_OPTION;
    ptr_u8_lcl_word_str             = NULL;
    s32_lcl_return_from_comparaison = 0;
    u64_lcl_position_in_command     = 0;
    u8_lcl_cnt                      = 0;
    u8_lcl_return_from_function     = RETURN_FAILURE;

    /**
    * Reseting the structure argument passed in argument of the function
    */
    u8_lcl_return_from_function = RETURN_FAILURE;
    u8_lcl_return_from_function = Fu8__structure_argument_reset(ptr_sstc_pssd_argument);

    /**
    * Check if function to reset the structure argument passed in argument of the function succeeded
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to reset the structure argument passed in argument of the function failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to reset the structure argument passed in argument of the function  failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;33mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to reset the structure argument passed in argument of the function failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to reset the structure argument passed in argument of the function suucceeded
        */
        } 

    /**
    * Getting the first word of the command string passed in argument of the function
    */
    u8_lcl_return_from_function = RETURN_FAILURE;
    u8_lcl_return_from_function = Fu8__get_first_word_from_string(ptr_u8_pssd_command_str, &ptr_u8_lcl_word_str, &u64_lcl_position_in_command);

    /**
    * Check if function to get the first word of the command string passed in argument of the function succeeded
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to get the first word of the command string passed in argument of the function failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to get the first word of the command string passed in argument of the function  failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;33mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to get the first word of the command string passed in argument of the function failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to get the first word of the command string passed in argument of the function suucceeded
        */
        }

    ptr_u8_pssd_command_str = ptr_u8_pssd_command_str + u64_lcl_position_in_command;

    /**
    * Check if there is no word in the actual line
    */
    if(ptr_u8_lcl_word_str == NULL)
        {
        /**
        * Treat the case when there is no word in the actual line
        */

        return (RETURN_SUCCESS);
        }
    else
        {
        /**
        * Treat the case when the first word of the actual line exist
        */
        } 

    s32_lcl_return_from_comparaison = 1;
    s32_lcl_return_from_comparaison = ft_strcmp_no_case((char *) ptr_u8_lcl_word_str, (char *) HELP_STR);

    /**
    * Check if the actual argument of the program is equals to the actual command
    */
    if(s32_lcl_return_from_comparaison == 0)
        {
        /**
        * Treat the case when the actual argument of the program is equals to the actual command
        */

        /**
        * Freeing and setting to NULL the actual word in the command passed in argument of the function
        */ 
        (void) free(ptr_u8_lcl_word_str);
        ptr_u8_lcl_word_str = NULL;

        (void) fv__command_option_help();

        return (RETURN_SUCCESS);
        }
    else
        {
        /**
        * Treat the case when the actual argument of the program is not equals to the actual command
        */
        }

    e_command_type = NO_COMMAND;
    u8_lcl_cnt     = 0;
    while(u8_lcl_cnt < COMMAND_NUMBER)
        {
        s32_lcl_return_from_comparaison = 1;
        s32_lcl_return_from_comparaison = ft_strcmp_no_case((char *) ptr_u8_lcl_word_str, (char *) command_name[u8_lcl_cnt]);

        /**
        * Check if the actual argument of the program is equals to the actual command
        */
        if(s32_lcl_return_from_comparaison == 0)
            {
            /**
            * Treat the case when the actual argument of the program is equals to the actual command
            */

            /**
            * Saving the command type of the actual command and exit the loop
            */
            e_command_type = u8_lcl_cnt;
            break;
            }
        else
            {
            /**
            * Treat the case when the actual argument of the program is not equals to the actual command
            */
            }

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Check if no command was found in the argument passed to the program
    */
    if(e_command_type == NO_COMMAND)
        {
        /**
        * Treat the case when no command was found in the argument passed to the program
        */

        /**
        * Display command error and command option help
        */
        fprintf(stderr, "Invalid command '%s'; type \"help\" for a list.\n", ptr_u8_lcl_word_str);
        fprintf(stderr, "error in %s\n", ptr_u8_lcl_word_str);

        /**
        * Freeing and setting to NULL the actual word in the command passed in argument of the function
        */ 
        (void) free(ptr_u8_lcl_word_str);
        ptr_u8_lcl_word_str = NULL;

        return (RETURN_SUCCESS);
        }
    else
        {
        /**
        * Treat the case when a command is found in the argument passed to the program
        */
        }

    /**
    * Freeing and setting to NULL the actual word in the command passed in argument of the function
    */ 
    (void) free(ptr_u8_lcl_word_str);
    ptr_u8_lcl_word_str = NULL;

    while(*ptr_u8_pssd_command_str != '\0')
        {
        /**
        * Getting the first word of the command string passed in argument of the function
        */
        u8_lcl_return_from_function = RETURN_FAILURE;
        u8_lcl_return_from_function =  Fu8__get_first_word_from_string(ptr_u8_pssd_command_str, &ptr_u8_lcl_word_str, &u64_lcl_position_in_command);

        /**
        * Check if function to get the first word of the command string passed in argument of the function succeeded
        */
        if(u8_lcl_return_from_function != RETURN_SUCCESS)
            {
            /**
            * Treat the case when the function to get the first word of the command string passed in argument of the function failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to get the first word of the command string passed in argument of the function  failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;33mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the function to get the first word of the command string passed in argument of the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when function to get the first word of the command string passed in argument of the function suucceeded
            */
            }

        ptr_u8_pssd_command_str = ptr_u8_pssd_command_str + u64_lcl_position_in_command;

        /**
        * Check if there is no next word in the command
        */
        if(ptr_u8_lcl_word_str == NULL)
            {
            /**
            * Treat the case when there is no next word in the command
            */

            break;
            }
        else
            {
            /**
            * Treat the case when there is next word in the command
            */
            } 

        e_option_type = NO_SIMPLE_OPTION;
        u8_lcl_cnt    = 0;
        while(u8_lcl_cnt < SIMPLE_OPTION_NUMBER)
            {
            /**
            * Check if the actual simple option is already set
            */
            if(ptr_sstc_pssd_argument->ptr_u8_simple_options_[u8_lcl_cnt] == FALSE)
                {
                /**
                * Treat the case when the actual simple option is already set
                */

                s32_lcl_return_from_comparaison = 1;
                s32_lcl_return_from_comparaison = ft_strcmp((char *) ptr_u8_lcl_word_str, (char *) simple_options[u8_lcl_cnt]);

                /**
                * Check if the actual argument of the program is equals to the actual option
                */
                if(s32_lcl_return_from_comparaison == 0)
                    {
                    /**
                    * Treat the case when the actual argument of the program is equals to the actual option
                    */

                    /**
                    * Saving the option type of the actual option and exit the loop
                    */
                    e_option_type = u8_lcl_cnt;
                    break;
                    }
                else
                    {
                    /**
                    * Treat the case when the actual argument of the program is not equals to the actual option
                    */
                    }
                }
            else
                {
                /**
                * Treat the case when  the actual simple option is not already set
                */
                }

            /**
            * Checking for overflow
            */
            if(u8_lcl_cnt < UINT8_MAX)
                {
                u8_lcl_cnt++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return a failure to indicate the counter variable overflow
                */
                return (RETURN_FAILURE);
                }
            }

        /**
        * Check if the actual argument of the program is an option
        */
        if((e_option_type != NO_SIMPLE_OPTION) && (e_option_type < SIMPLE_OPTION_NUMBER))
            {
            /**
            * Treat the case when the actual argument of the program is an simple option
            */

            /**
            * Setting the found option to the structure argument passed in argument of the function
            */
            ptr_sstc_pssd_argument->ptr_u8_simple_options_[e_option_type] = TRUE;

            /**
            * Freeing and setting to NULL the actual word in the command passed in argument of the function
            */ 
            (void) free(ptr_u8_lcl_word_str);
            ptr_u8_lcl_word_str = NULL;

            continue;
            }
        else
            {
            /**
            * Treat the case when the actual argument of the program is not an simple option
            */
            }

        e_argument_option_type = NO_ARGUMENT_OPTION;
        u8_lcl_cnt             = 0;
        while(u8_lcl_cnt < ARGUMENT_OPTION_NUMBER)
            {
            /**
            * Check if the actual argument option is already set
            */
            if(ptr_sstc_pssd_argument->ptr_u8_argument_options_[u8_lcl_cnt] == FALSE)
                {
                /**
                * Treat the case when the actual argument option is already set
                */

                s32_lcl_return_from_comparaison = 1;
                s32_lcl_return_from_comparaison = ft_strcmp((char *) ptr_u8_lcl_word_str, (char *) argument_options[u8_lcl_cnt]);

                /**
                * Check if the actual argument of the program is equals to the actual option
                */
                if(s32_lcl_return_from_comparaison == 0)
                    {
                    /**
                    * Treat the case when the actual argument of the program is equals to the actual option
                    */

                    /**
                    * Saving the option type of the actual option and exit the loop
                    */
                    e_argument_option_type = u8_lcl_cnt;
                    break;
                    }
                else
                    {
                    /**
                    * Treat the case when the actual argument of the program is not equals to the actual option
                    */
                    }
                }
            else
                {
                /**
                * Treat the case when the actual argument option is not already set
                */
                }

            /**
            * Checking for overflow
            */
            if(u8_lcl_cnt < UINT8_MAX)
                {
                u8_lcl_cnt++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return a failure to indicate the counter variable overflow
                */
                return (RETURN_FAILURE);
                }
            }

        /**
        * Check if the actual argument of the program is an argument option
        */
        if((e_argument_option_type != NO_ARGUMENT_OPTION) && (e_argument_option_type < ARGUMENT_OPTION_NUMBER))
            {
            /**
            * Freeing and setting to NULL the actual word in the command passed in argument of the function
            */
            (void) free(ptr_u8_lcl_word_str);
            ptr_u8_lcl_word_str = NULL;

            /**
            * Getting the first word of the command string passed in argument of the function
            */
            u8_lcl_return_from_function = RETURN_FAILURE;
            u8_lcl_return_from_function = Fu8__get_first_word_from_string(ptr_u8_pssd_command_str, &ptr_u8_lcl_word_str, &u64_lcl_position_in_command);

            /**
            * Check if function to get the first word of the command string passed in argument of the function succeeded
            */
            if(u8_lcl_return_from_function != RETURN_SUCCESS)
                {
                /**
                * Treat the case when the function to get the first word of the command string passed in argument of the function failed
                */

                #ifdef DEVELOPEMENT
                fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to get the first word of the command string passed in argument of the function  failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                fprintf(stderr, "\033[1;33mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the function to get the first word of the command string passed in argument of the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when function to get the first word of the command string passed in argument of the function suucceeded
                */
                }

            ptr_u8_pssd_command_str = ptr_u8_pssd_command_str + u64_lcl_position_in_command;

            /**
            * Check if there is no argument after the actual argument option
            */
            if(ptr_u8_lcl_word_str == NULL)
                {
                /**
                * Treat the case when there is no argument after the actual argument option
                */

                /**
                * Display command error and command option help
                */
                fprintf(stderr, "Invalid command '%s'; type \"help\" for a list.\n", ptr_u8_lcl_word_str);
                fprintf(stderr, "error in %s\n", ptr_u8_lcl_word_str);

                /**
                * Freeing and setting to NULL the actual word in the command passed in argument of the function
                */ 
                (void) free(ptr_u8_lcl_word_str);
                ptr_u8_lcl_word_str = NULL;

                return (RETURN_SUCCESS);
                }
            else
                {
                /**
                * Treat the case when there is an argument after the actual argument option
                */
                } 

            /**
            * Setting the found option to the structure argument passed in argument of the function
            */
            ptr_sstc_pssd_argument->ptr_u8_argument_options_[e_argument_option_type] = TRUE;

            /**
            * Copying the actual option argument to the actual argument option string in the structure argument passed in argument of the function
            */
            u8_lcl_return_from_function = RETURN_FAILURE;
            u8_lcl_return_from_function = Fu8__copying_string_to_allocated_string(ptr_u8_lcl_word_str, &(ptr_sstc_pssd_argument->dbl_ptr_u8_argument_option_value_str_[e_argument_option_type]));

            /**
            * Check if function to copy the actual option argument to the actual argument option string in the structure argument passed in argument of the function succeeded
            */
            if(u8_lcl_return_from_function != RETURN_SUCCESS)
                {
                /**
                * Treat the case when the function to copy the actual option argument to the actual argument option string in the structure argument passed in argument of the function failed
                */

                #ifdef DEVELOPEMENT
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to copy the actual option argument to the actual argument option string in the structure argument passed in argument of the function  failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the function to copy the actual option argument to the actual argument option string in the structure argument passed in argument of the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when function to copy the actual option argument to the actual argument option string in the structure argument passed in argument of the function suucceeded
                */
                }

            /**
            * Freeing and setting to NULL the actual word in the command passed in argument of the function
            */ 
            (void) free(ptr_u8_lcl_word_str);
            ptr_u8_lcl_word_str = NULL;

            continue;
            }
        else
            {
            /**
            * Display option error and command option help
            */
            }

        /**
        * Check if the number of file in argument is at the maximum value
        */
        if(ptr_sstc_pssd_argument->u64_number_of_file_in_argument_ == UINT64_MAX)
            {
            /**
            * Treat the case when the number of file in argument is at the maximum value
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the number of file in argument is at the maximum value\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the number of file in argument is at the maximum value
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the number of file in argument is not at the maximum value
            */
            }

        /**
        * Reallocate the dynamique array of file path in the structure argument passed in argument of the function to add a new file path
        */
        ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_ = (uint8_t **) realloc(ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_, sizeof(uint8_t *) * (ptr_sstc_pssd_argument->u64_number_of_file_in_argument_ + 1));

        /**
        * Check if the reallocation of the dynamique array of file path in the structure argument passed in argument of the function failed
        */
        if(ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_ == NULL)
            {
            /**
            * Treat the case when the reallocation of the dynamique array of file path in the structure argument passed in argument of the function failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the reallocation of the dynamique array of file path in the structure argument passed in argument of the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the reallocation of the dynamique array of file path in the structure argument passed in argument of the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the reallocation of the dynamique array of file path in the structure argument passed in argument of the function succeeded
            */

            ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_[ptr_sstc_pssd_argument->u64_number_of_file_in_argument_] = NULL;
            }

        /**
        * Copying the content of the actual argument of the program passed in argument of the function to the new file path in the dynamique array of file path in the structure argument passed in argument of the function
        */
        u8_lcl_return_from_function = RETURN_FAILURE;
        u8_lcl_return_from_function = Fu8__copying_string_to_allocated_string(ptr_u8_lcl_word_str, &(ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_[ptr_sstc_pssd_argument->u64_number_of_file_in_argument_]));

        /**
        * Check if function to copy the content of the actual argument of the program passed in argument of the function to the new file path in the dynamique array of file path in the structure argument passed in argument of the function succeeded
        */
        if(u8_lcl_return_from_function != RETURN_SUCCESS)
            {
            /**
            * Treat the case when the function to copy the content of the actual argument of the program passed in argument of the function to the new file path in the dynamique array of file path in the structure argument passed in argument of the function failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to copy the content of the actual argument of the program passed in argument of the function to the new file path in the dynamique array of file path in the structure argument passed in argument of the function  failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the function to copy the content of the actual argument of the program passed in argument of the function to the new file path in the dynamique array of file path in the structure argument passed in argument of the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when function to copy the content of the actual argument of the program passed in argument of the function to the new file path in the dynamique array of file path in the structure argument passed in argument of the function suucceeded
            */
            }

        /**
        * Checking for overflow
        */
        if(ptr_sstc_pssd_argument->u64_number_of_file_in_argument_ < UINT64_MAX)
            {
            ptr_sstc_pssd_argument->u64_number_of_file_in_argument_++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        //TODO

        /**
        * Freeing and setting to NULL the actual word in the command passed in argument of the function
        */ 
        (void) free(ptr_u8_lcl_word_str);
        ptr_u8_lcl_word_str = NULL;
        }

    /**
    * Setting the saved command type to the structure argument passed in argument of the function
    */
    ptr_sstc_pssd_argument->e_command_type_ = e_command_type;

    /**
    * execute command
    */
    u8_lcl_return_from_function = RETURN_FAILURE;
    u8_lcl_return_from_function = Fu8__execute_command(ptr_sstc_pssd_argument);

    /**
    * Check if function to execute command succeeded
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to execute command failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to execute command failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to execute command failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to execute command suucceeded
        */
        } 

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__get_command_from_stdin(argument_t *ptr_sstc_pssd_argument, uint8_t *ptr_u8_pssd_program_argument_status)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the structure argument is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_argument == NULL)
        {
        /**
        * Treat the case when the structure argument is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure argument is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure argument passed in argument of the function is not already initialized
    */
    if((ptr_sstc_pssd_argument->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure argument passed in argument of the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument passed in argument of the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument passed in argument of the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure argument passed in argument of the function is already initialized as expected
        */
        }

    /**
    * Check if the pointer to the program argument status is correctly pointing passed as an argument of the function
    */
    if(ptr_u8_pssd_program_argument_status == NULL)
        {
        /**
        * Treat the case when the pointer to the program argument status is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the program argument status is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;33mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the program argument status is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the program argument status is correctly pointing passed as an argument of the function
        */
        } 

    /**
    * Creation of local variable
    */
    int32_t   s32_lcl_return_from_function;
    uint64_t  u64_lcl_cnt;
    uint8_t   u8_lcl_command_exist;
    uint8_t   u8_lcl_return_from_function;
    uint8_t  *ptr_u8_lcl_command_str;

    /**
    * Initialization of local variable
    */
    ptr_u8_lcl_command_str       = NULL;
    s32_lcl_return_from_function = 0;
    u64_lcl_cnt                  = 0;
    u8_lcl_command_exist         = FALSE;
    u8_lcl_return_from_function  = RETURN_FAILURE;

    /**
    * Setting all the element of the input buffer of the structure argument passed in argument of the function to zero
    */
    u64_lcl_cnt = 0;
    while(u64_lcl_cnt < LIBFT_BUFFER_SIZE)
        {
        ptr_sstc_pssd_argument->u8_input_buffer_[u64_lcl_cnt] = 0;

        /**
        * Checking for overflow
        */
        if(u64_lcl_cnt < UINT64_MAX)
            {
            u64_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;33mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Setting the length of the input buffer of the structure argument passed in argument of the function to zero
    */
    ptr_sstc_pssd_argument->u64_length_of_input_buffer_ = 0;

    /**
    * Readding line from stdandard input until a valide command is found or the end of the stdandard input is found
    */ 
    while(u8_lcl_command_exist == FALSE)
        {
        fprintf(stdout, "ft_ssl> ");
        (void) fflush(stdout);

        /**
        * get the next line from the standard input
        */
        s32_lcl_return_from_function = -1;
        s32_lcl_return_from_function = get_next_line_with_buffer_passed_as_input(STDIN_FILENO, (char **) &ptr_u8_lcl_command_str, (char *) ptr_sstc_pssd_argument->u8_input_buffer_);

        /**
        * Check if function to get the next line from the standard input succeeded
        */
        if(s32_lcl_return_from_function < 0)
            {
            /**
            * Treat the case when the function to get the next line from the standard input failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to get the next line from the standard input  failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;33mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the function to get the next line from the standard input failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when function to get the next line from the standard input suucceeded
            */
            }

        /**
        * Count the number of character in the input buffer of the structure argument passed in argument of the function
        */ 
        ptr_sstc_pssd_argument->u64_length_of_input_buffer_ = 0;
        while((ptr_sstc_pssd_argument->u8_input_buffer_[ptr_sstc_pssd_argument->u64_length_of_input_buffer_] != '\0') && (ptr_sstc_pssd_argument->u64_length_of_input_buffer_ < LIBFT_BUFFER_SIZE))
            {
            /**
            * Checking for overflow
            */
            if(ptr_sstc_pssd_argument->u64_length_of_input_buffer_ < UINT64_MAX)
                {
                ptr_sstc_pssd_argument->u64_length_of_input_buffer_++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                fprintf(stderr, "\033[1;33mERROR\033[0m\n");
                #endif

                /**
                * Return a failure to indicate the counter variable overflow
                */
                return (RETURN_FAILURE);
                }
            }

        /**
        * Getting the command to execute and the option of the command from the string readen from the standard input
        */
        u8_lcl_return_from_function = RETURN_FAILURE;
        u8_lcl_return_from_function = Fu8__load_argument_data_from_string(ptr_sstc_pssd_argument, ptr_u8_lcl_command_str, &u8_lcl_command_exist);

        /**
        * Check if function to get the command to execute and the option of the command from the string readen from the standard input succeeded
        */
        if(u8_lcl_return_from_function != RETURN_SUCCESS)
            {
            /**
            * Treat the case when the function to get the command to execute and the option of the command from the string readen from the standard input failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to get the command to execute and the option of the command from the string readen from the standard input  failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;33mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the function to get the command to execute and the option of the command from the string readen from the standard input failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when function to get the command to execute and the option of the command from the string readen from the standard input suucceeded
            */
            }

        /**
        * Freeing and setting to NULL the local command string
        */ 
        (void) free(ptr_u8_lcl_command_str);
        ptr_u8_lcl_command_str = NULL;

        /**
        * Check if the end of the standard input has been found
        */
        if((s32_lcl_return_from_function == 0) && (ptr_sstc_pssd_argument->u8_input_buffer_[0] == '\0'))
            {
            /**
            * Treat the case when the end of the standard input has been found
            */

            (*ptr_u8_pssd_program_argument_status) = ARGUMENT_NO_CONTINUE;
            break;
            }
        else
            {
            /**
            * Treat the case when  the end of the standard input is not found
            */
            } 
        }

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__load_data_from_argument(argument_t *ptr_sstc_pssd_argument, int32_t s32_pssd_program_argument_number, uint8_t **dbl_ptr_u8_program_arguments, uint8_t *ptr_u8_pssd_program_argument_status)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the structure argument is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_argument == NULL)
        {
        /**
        * Treat the case when the structure argument is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure argument is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure argument passed in argument of the function is not already initialized
    */
    if((ptr_sstc_pssd_argument->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure argument passed in argument of the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument passed in argument of the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument passed in argument of the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure argument passed in argument of the function is already initialized as expected
        */
        }

    /**
    * Check if the number of argument of the program is zero
    */
    if(s32_pssd_program_argument_number == 0)
        {
        /**
        * Treat the case when the number of argument of the program is zero
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the number of argument of the program is zero\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the number of argument of the program is zero
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the number of argument of the program is not zero
        */
        }

    /**
    * Check if the array of argument of the program passed in argument of the function is correctly pointing passed as an argument of the function
    */
    if(dbl_ptr_u8_program_arguments == NULL)
        {
        /**
        * Treat the case when the array of argument of the program passed in argument of the function is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the array of argument of the program passed in argument of the function is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the array of argument of the program passed in argument of the function is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the array of argument of the program passed in argument of the function is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the program argument status is correctly pointing passed as an argument of the function
    */
    if(ptr_u8_pssd_program_argument_status == NULL)
        {
        /**
        * Treat the case when the program argument status is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the program argument status is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the program argument status is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the program argument status is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Creation of local variable
    */
    enum e_argument_option_list e_argument_option_type;
    enum e_command_list         e_command_type;
    enum e_simple_option_list   e_option_type;
    int32_t                     s32_lcl_argument_loop_cnt;
    int32_t                     s32_lcl_return_from_comparaison;
    uint8_t                     u8_lcl_cnt;
    uint8_t                     u8_lcl_return_from_function;

    /**
    * Initialization of local variable
    */
    e_argument_option_type          = NO_ARGUMENT_OPTION;
    e_command_type                  = NO_COMMAND;
    e_option_type                   = NO_SIMPLE_OPTION;
    s32_lcl_return_from_comparaison = 0;
    u8_lcl_cnt                      = 0;
    u8_lcl_return_from_function     = RETURN_FAILURE;

    (*ptr_u8_pssd_program_argument_status) = ARGUMENT_ERROR;

    /**
    * Check if the number of argument of the program is one
    */
    if(s32_pssd_program_argument_number == 1)
        {
        /**
        * Treat the case when the number of argument of the program is one
        */

        /**
        * Getting the command form the standard input of the program
        */
        u8_lcl_return_from_function = RETURN_FAILURE;
        u8_lcl_return_from_function = Fu8__get_command_from_stdin(ptr_sstc_pssd_argument, ptr_u8_pssd_program_argument_status);

        /**
        * Check if function to get the command form the standard input of the program succeeded
        */
        if(u8_lcl_return_from_function != RETURN_SUCCESS)
            {
            /**
            * Treat the case when the function to get the command form the standard input of the program failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to get the command form the standard input of the program  failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;33mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;33mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the function to get the command form the standard input of the program failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when function to get the command form the standard input of the program suucceeded
            */
            }

//TODO        (void) fv__usage();

        /**
        * Return success to indicate the number of argument of the program is one
        */
        return (RETURN_SUCCESS);
        }
    else
        {
        /**
        * Treat the case when the number of argument of the program is not one
        */
        }

    s32_lcl_argument_loop_cnt = 1;
    while(s32_lcl_argument_loop_cnt < s32_pssd_program_argument_number)
        {
        /**
        * Check if the command is not already set
        */
        if(ptr_sstc_pssd_argument->e_command_type_ == NO_COMMAND)
            {
            /**
            * Treat the case when the command is not already set
            */

            e_command_type = NO_COMMAND;
            u8_lcl_cnt     = 0;
            while(u8_lcl_cnt < COMMAND_NUMBER)
                {
                s32_lcl_return_from_comparaison = 1;
                s32_lcl_return_from_comparaison = ft_strcmp_no_case((char *) dbl_ptr_u8_program_arguments[s32_lcl_argument_loop_cnt], (char *) command_name[u8_lcl_cnt]);

                /**
                * Check if the actual argument of the program is equals to the actual command
                */
                if(s32_lcl_return_from_comparaison == 0)
                    {
                    /**
                    * Treat the case when the actual argument of the program is equals to the actual command
                    */

                    /**
                    * Saving the command type of the actual command and exit the loop
                    */
                    e_command_type = u8_lcl_cnt;
                    break;
                    }
                else
                    {
                    /**
                    * Treat the case when the actual argument of the program is not equals to the actual command
                    */
                    }

                /**
                * Checking for overflow
                */
                if(u8_lcl_cnt < UINT8_MAX)
                    {
                    u8_lcl_cnt++;
                    }
                else
                    {
                    #ifdef DEVELOPEMENT
                    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                    #endif

                    #ifdef DEMO
                    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                    #endif

                    #ifdef PRODUCTION
                    fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                    #endif

                    /**
                    * Return failure to indicate the counter variable overflow
                    */
                    return (RETURN_FAILURE);
                    }
                }

            /**
            * Check if no command was found in the argument passed to the program
            */
            if(e_command_type == NO_COMMAND)
                {
                /**
                * Treat the case when no command was found in the argument passed to the program
                */

                /**
                * Display command error and command option help
                */
                fprintf(stderr, "ft_ssl: Error: '%s' is an invalid command.\n\n", dbl_ptr_u8_program_arguments[s32_lcl_argument_loop_cnt]);
                (void) fv__command_option_help();

                (*ptr_u8_pssd_program_argument_status) = ARGUMENT_ERROR;

                return (RETURN_SUCCESS);
                }
            else
                {
                /**
                * Treat the case when a command is found in the argument passed to the program
                */
                }

            /**
            * Setting the saved command type to the structure argument passed in argument of the function
            */
            ptr_sstc_pssd_argument->e_command_type_ = e_command_type;
            }
        else
            {
            /**
            * Treat the case when the command is already set
            */

            e_option_type = NO_SIMPLE_OPTION;
            u8_lcl_cnt    = 0;
            while(u8_lcl_cnt < SIMPLE_OPTION_NUMBER)
                {
                /**
                * Check if the actual simple option is already set
                */
                if(ptr_sstc_pssd_argument->ptr_u8_simple_options_[u8_lcl_cnt] == FALSE)
                    {
                    /**
                    * Treat the case when the actual simple option is already set
                    */

                    s32_lcl_return_from_comparaison = 1;
                    s32_lcl_return_from_comparaison = ft_strcmp((char *) dbl_ptr_u8_program_arguments[s32_lcl_argument_loop_cnt], (char *) simple_options[u8_lcl_cnt]);

                    /**
                    * Check if the actual argument of the program is equals to the actual option
                    */
                    if(s32_lcl_return_from_comparaison == 0)
                        {
                        /**
                        * Treat the case when the actual argument of the program is equals to the actual option
                        */

                        /**
                        * Saving the option type of the actual option and exit the loop
                        */
                        e_option_type = u8_lcl_cnt;
                        break;
                        }
                    else
                        {
                        /**
                        * Treat the case when the actual argument of the program is not equals to the actual option
                        */
                        }
                    }
                else
                    {
                    /**
                    * Treat the case when  the actual simple option is not already set
                    */
                    }

                /**
                * Checking for overflow
                */
                if(u8_lcl_cnt < UINT8_MAX)
                    {
                    u8_lcl_cnt++;
                    }
                else
                    {
                    #ifdef DEVELOPEMENT
                    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                    #endif

                    #ifdef DEMO
                    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                    #endif

                    #ifdef PRODUCTION
                    fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                    #endif

                    /**
                    * Return a failure to indicate the counter variable overflow
                    */
                    return (RETURN_FAILURE);
                    }
                }

            /**
            * Check if the actual argument of the program is an option
            */
            if((e_option_type != NO_SIMPLE_OPTION) && (e_option_type < SIMPLE_OPTION_NUMBER))
                {
                /**
                * Treat the case when the actual argument of the program is an simple option
                */

                /**
                * Setting the found option to the structure argument passed in argument of the function
                */
                ptr_sstc_pssd_argument->ptr_u8_simple_options_[e_option_type] = TRUE;

                /**
                * Checking for overflow
                */
                if(s32_lcl_argument_loop_cnt < INT32_MAX)
                    {
                    s32_lcl_argument_loop_cnt++;
                    }
                else
                    {
                    #ifdef DEVELOPEMENT
                    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The signed 32 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                    #endif

                    #ifdef DEMO
                    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                    #endif

                    #ifdef PRODUCTION
                    fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                    #endif

                    /**
                    * Return a failure to indicate the counter variable overflow
                    */
                    return (RETURN_FAILURE);
                    }

                continue;
                }
            else
                {
                /**
                * Treat the case when the actual argument of the program is not an simple option
                */
                }

            e_argument_option_type = NO_ARGUMENT_OPTION;
            u8_lcl_cnt             = 0;
            while(u8_lcl_cnt < ARGUMENT_OPTION_NUMBER)
                {
                /**
                * Check if the actual argument option is already set
                */
                if(ptr_sstc_pssd_argument->ptr_u8_argument_options_[u8_lcl_cnt] == FALSE)
                    {
                    /**
                    * Treat the case when the actual argument option is already set
                    */

                    s32_lcl_return_from_comparaison = 1;
                    s32_lcl_return_from_comparaison = ft_strcmp((char *) dbl_ptr_u8_program_arguments[s32_lcl_argument_loop_cnt], (char *) argument_options[u8_lcl_cnt]);

                    /**
                    * Check if the actual argument of the program is equals to the actual option
                    */
                    if(s32_lcl_return_from_comparaison == 0)
                        {
                        /**
                        * Treat the case when the actual argument of the program is equals to the actual option
                        */

                        /**
                        * Saving the option type of the actual option and exit the loop
                        */
                        e_argument_option_type = u8_lcl_cnt;
                        break;
                        }
                    else
                        {
                        /**
                        * Treat the case when the actual argument of the program is not equals to the actual option
                        */
                        }
                    }
                else
                    {
                    /**
                    * Treat the case when the actual argument option is not already set
                    */
                    }

                /**
                * Checking for overflow
                */
                if(u8_lcl_cnt < UINT8_MAX)
                    {
                    u8_lcl_cnt++;
                    }
                else
                    {
                    #ifdef DEVELOPEMENT
                    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                    #endif

                    #ifdef DEMO
                    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                    #endif

                    #ifdef PRODUCTION
                    fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                    #endif

                    /**
                    * Return a failure to indicate the counter variable overflow
                    */
                    return (RETURN_FAILURE);
                    }
                }

            /**
            * Check if the actual argument of the program is an argument option
            */
            if((e_argument_option_type != NO_ARGUMENT_OPTION) && (e_argument_option_type < ARGUMENT_OPTION_NUMBER))
                {
                /**
                * Check if their are an argument to the actual argument option
                */
                if(s32_lcl_argument_loop_cnt + 1 >= s32_pssd_program_argument_number)
                    {
                    /**
                    * Treat the case when their are an argument to the actual argument option
                    */

                    /**
                    * Display option error and command option help
                    */
                    fprintf(stderr, "ft_ssl: Error: '%s' missing argument.\n\n", dbl_ptr_u8_program_arguments[s32_lcl_argument_loop_cnt]);

                    (void) fv__command_option_help();

                    (*ptr_u8_pssd_program_argument_status) = ARGUMENT_ERROR;

                    return (RETURN_SUCCESS);
                    }
                else
                    {
                    /**
                    * Treat the case when their is not an argument to the actual argument option
                    */
                    }

                /**
                * Setting the found option to the structure argument passed in argument of the function
                */
                ptr_sstc_pssd_argument->ptr_u8_argument_options_[e_argument_option_type] = TRUE;

                /**
                * Checking for overflow
                */
                if(s32_lcl_argument_loop_cnt < INT32_MAX)
                    {
                    s32_lcl_argument_loop_cnt++;
                    }
                else
                    {
                    #ifdef DEVELOPEMENT
                    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The signed 32 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                    #endif

                    #ifdef DEMO
                    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                    #endif

                    #ifdef PRODUCTION
                    fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                    #endif

                    /**
                    * Return a failure to indicate the counter variable overflow
                    */
                    return (RETURN_FAILURE);
                    }

                /**
                * Copying the actual option argument to the actual argument option string in the structure argument passed in argument of the function
                */
                u8_lcl_return_from_function = RETURN_FAILURE;
                u8_lcl_return_from_function = Fu8__copying_string_to_allocated_string(dbl_ptr_u8_program_arguments[s32_lcl_argument_loop_cnt], &(ptr_sstc_pssd_argument->dbl_ptr_u8_argument_option_value_str_[e_argument_option_type]));

                /**
                * Check if function to copy the actual option argument to the actual argument option string in the structure argument passed in argument of the function succeeded
                */
                if(u8_lcl_return_from_function != RETURN_SUCCESS)
                    {
                    /**
                    * Treat the case when the function to copy the actual option argument to the actual argument option string in the structure argument passed in argument of the function failed
                    */

                    #ifdef DEVELOPEMENT
                    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to copy the actual option argument to the actual argument option string in the structure argument passed in argument of the function  failed\n", __FILE__, __func__, __LINE__);
                    #endif

                    #ifdef DEMO
                    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                    #endif

                    #ifdef PRODUCTION
                    fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                    #endif

                    /**
                    * Return failure to indicate the function to copy the actual option argument to the actual argument option string in the structure argument passed in argument of the function failed
                    */
                    return (RETURN_FAILURE);
                    }
                else
                    {
                    /**
                    * Treat the case when function to copy the actual option argument to the actual argument option string in the structure argument passed in argument of the function suucceeded
                    */
                    }

                /**
                * Checking for overflow
                */
                if(s32_lcl_argument_loop_cnt < INT32_MAX)
                    {
                    s32_lcl_argument_loop_cnt++;
                    }
                else
                    {
                    #ifdef DEVELOPEMENT
                    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The signed 32 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                    #endif

                    #ifdef DEMO
                    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                    #endif

                    #ifdef PRODUCTION
                    fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                    #endif

                    /**
                    * Return a failure to indicate the counter variable overflow
                    */
                    return (RETURN_FAILURE);
                    }

                continue;
                }
            else
                {
                /**
                * Display option error and command option help
                */
                }

            /**
            * Check if the number of file in argument is at the maximum value
            */
            if(ptr_sstc_pssd_argument->u64_number_of_file_in_argument_ == UINT64_MAX)
                {
                /**
                * Treat the case when the number of file in argument is at the maximum value
                */

                #ifdef DEVELOPEMENT
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the number of file in argument is at the maximum value\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the number of file in argument is at the maximum value
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the number of file in argument is not at the maximum value
                */
                }

            /**
            * Reallocate the dynamique array of file path in the structure argument passed in argument of the function to add a new file path
            */
            ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_ = (uint8_t **) realloc(ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_, sizeof(uint8_t *) * (ptr_sstc_pssd_argument->u64_number_of_file_in_argument_ + 1));

            /**
            * Check if the reallocation of the dynamique array of file path in the structure argument passed in argument of the function failed
            */
            if(ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_ == NULL)
                {
                /**
                * Treat the case when the reallocation of the dynamique array of file path in the structure argument passed in argument of the function failed
                */

                #ifdef DEVELOPEMENT
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the reallocation of the dynamique array of file path in the structure argument passed in argument of the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the reallocation of the dynamique array of file path in the structure argument passed in argument of the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the reallocation of the dynamique array of file path in the structure argument passed in argument of the function succeeded
                */

                ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_[ptr_sstc_pssd_argument->u64_number_of_file_in_argument_] = NULL;
                }

            /**
            * Copying the content of the actual argument of the program passed in argument of the function to the new file path in the dynamique array of file path in the structure argument passed in argument of the function
            */
            u8_lcl_return_from_function = RETURN_FAILURE;
            u8_lcl_return_from_function = Fu8__copying_string_to_allocated_string(dbl_ptr_u8_program_arguments[s32_lcl_argument_loop_cnt], &(ptr_sstc_pssd_argument->dbl_ptr_u8_file_path_str_[ptr_sstc_pssd_argument->u64_number_of_file_in_argument_]));

            /**
            * Check if function to copy the content of the actual argument of the program passed in argument of the function to the new file path in the dynamique array of file path in the structure argument passed in argument of the function succeeded
            */
            if(u8_lcl_return_from_function != RETURN_SUCCESS)
                {
                /**
                * Treat the case when the function to copy the content of the actual argument of the program passed in argument of the function to the new file path in the dynamique array of file path in the structure argument passed in argument of the function failed
                */

                #ifdef DEVELOPEMENT
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to copy the content of the actual argument of the program passed in argument of the function to the new file path in the dynamique array of file path in the structure argument passed in argument of the function  failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the function to copy the content of the actual argument of the program passed in argument of the function to the new file path in the dynamique array of file path in the structure argument passed in argument of the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when function to copy the content of the actual argument of the program passed in argument of the function to the new file path in the dynamique array of file path in the structure argument passed in argument of the function suucceeded
                */
                }

            /**
            * Checking for overflow
            */
            if(ptr_sstc_pssd_argument->u64_number_of_file_in_argument_ < UINT64_MAX)
                {
                ptr_sstc_pssd_argument->u64_number_of_file_in_argument_++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return a failure to indicate the counter variable overflow
                */
                return (RETURN_FAILURE);
                }
            }

        /**
        * Checking for overflow
        */
        if(s32_lcl_argument_loop_cnt < INT32_MAX)
            {
            s32_lcl_argument_loop_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The signed 32 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Check if no command was found in the argument of the program
    */
    if(ptr_sstc_pssd_argument->e_command_type_ == NO_COMMAND)
        {
        /**
        * Treat the case when no command was found in the argument of the program
        */

        (*ptr_u8_pssd_program_argument_status) = ARGUMENT_NO_CONTINUE;

        (void) fv__usage();

        return (RETURN_SUCCESS);
        }
    else
        {
        /**
        * Treat the case when command was found in the argument of the program
        */
        }

    (*ptr_u8_pssd_program_argument_status) = ARGUMENT_CONTINUE;
    return (RETURN_SUCCESS);
    }
