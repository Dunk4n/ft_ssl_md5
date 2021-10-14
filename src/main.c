/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niduches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:52:10 by niduches          #+#    #+#             */
/*   Updated: 2021/09/13 16:18:08 by niduches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ssl.h"

const   uint8_t *simple_options[SIMPLE_OPTION_NUMBER] =
    {
    (uint8_t *) "-p",
    (uint8_t *) "-q",
    (uint8_t *) "-r",
    };

const   uint8_t *argument_options[ARGUMENT_OPTION_NUMBER] =
    {
    (uint8_t *) "-s",
    };

const   uint8_t *command_name[COMMAND_NUMBER] =
    {
    (uint8_t *) "md5",
    (uint8_t *) "sha224",
    (uint8_t *) "sha256",
    (uint8_t *) "sha384",
    (uint8_t *) "sha512",
    (uint8_t *) "rmd128",
    (uint8_t *) "rmd160",
    (uint8_t *) "rmd256",
    (uint8_t *) "rmd320",
    (uint8_t *) "whirlpool",
    };

const   uint8_t *uppercase_command_name[COMMAND_NUMBER] =
    {
    (uint8_t *) "MD5",
    (uint8_t *) "SHA224",
    (uint8_t *) "SHA256",
    (uint8_t *) "SHA384",
    (uint8_t *) "SHA512",
    (uint8_t *) "RMD128",
    (uint8_t *) "RMD160",
    (uint8_t *) "RMD256",
    (uint8_t *) "RMD320",
    (uint8_t *) "WHIRLPOOL",
    };

uint8_t (*const command_function[COMMAND_NUMBER])(hash_input_t *ptr_sstc_pssd_hash_input, hash_output_t *ptr_sstc_pssd_hash_output) =
    {
    Fu8__md5,
    Fu8__sha224,
    Fu8__sha256,
    Fu8__sha384,
    Fu8__sha512,
    Fu8__rmd128,
    Fu8__rmd160,
    Fu8__rmd256,
    Fu8__rmd320,
    Fu8__whirlpool,
    };

int main(int32_t s32_pssd_program_argument_number, char **dbl_ptr_s8_pssd_program_arguments)
    {
    /**
    * Creation of local variable
    */
    argument_t sstc_lcl_argument_data;
    uint8_t    u8_lcl_return_from_function;
    uint8_t    u8_lcl_program_argument_status;
    uint8_t    u8_lcl_program_return;

    /**
    * Initialization of local variable
    */
    sstc_lcl_argument_data.u8_global_status_  = 0;
    u8_lcl_return_from_function               = 0;
    u8_lcl_program_argument_status            = ARGUMENT_CONTINUE;
    u8_lcl_program_return                     = EXIT_SUCCESS;

    /**
    * Initialization of the structure argument data
    */
    u8_lcl_return_from_function = RETURN_FAILURE;
    u8_lcl_return_from_function =  Fu8__structure_argument_init(&sstc_lcl_argument_data);

    /**
    * Check if function to init of the structure argument data succeeded
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to init of the structure argument data failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to init of the structure argument data  failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to init of the structure argument data failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to init of the structure argument data suucceeded
        */
        }

    /**
    * Get all the option and display error message
    */
    u8_lcl_return_from_function = RETURN_FAILURE;
    u8_lcl_return_from_function = Fu8__load_data_from_argument(&sstc_lcl_argument_data, s32_pssd_program_argument_number, (uint8_t **) dbl_ptr_s8_pssd_program_arguments, &u8_lcl_program_argument_status);

    /**
    * Check if the function to get all the options from the program arguments failed
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to get all the options from the program arguments failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the function to get all the options from the program arguments failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to get all the options from the program arguments failed
        */
        return (EXIT_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the function to get all the options from the program arguments succeeded
        */
        }

    /**
    * Check if the argument of the program are not correctly formated
    */
    if(u8_lcl_program_argument_status == ARGUMENT_ERROR)
        {
        /**
        * Treat the case when the argument of the program are not correctly formated
        */

        /**
        * arg close
        */
        u8_lcl_return_from_function = RETURN_FAILURE;
        u8_lcl_return_from_function =  Fu8__structure_argument_close(&sstc_lcl_argument_data);

        /**
        * Check if function to arg close succeeded
        */
        if(u8_lcl_return_from_function != RETURN_SUCCESS)
            {
            /**
            * Treat the case when the function to arg close failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to arg close  failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the function to arg close failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when function to arg close suucceeded
            */
            } 

        return (EXIT_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the argument of the program are correctly formated
        */

        /**
        * Check if their is no argument
        */
        if(u8_lcl_program_argument_status != ARGUMENT_CONTINUE)
            {
            /**
            * Treat the case when their is no argument
            */

            /**
            * arg close
            */
            u8_lcl_return_from_function = RETURN_FAILURE;
            u8_lcl_return_from_function =  Fu8__structure_argument_close(&sstc_lcl_argument_data);

            /**
            * Check if function to arg close succeeded
            */
            if(u8_lcl_return_from_function != RETURN_SUCCESS)
                {
                /**
                * Treat the case when the function to arg close failed
                */

                #ifdef DEVELOPEMENT
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to arg close  failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the function to arg close failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when function to arg close suucceeded
                */
                } 

            return (EXIT_SUCCESS);
            }
        else
            {
            /**
            * Treat the case when their is argument
            */
            }
        }

    /**
    * execute command
    */
    u8_lcl_return_from_function = RETURN_FAILURE;
    u8_lcl_return_from_function = Fu8__execute_command(&sstc_lcl_argument_data);

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

    /**
    * Check if an error occure during the execution of the passed command
    */
    if((sstc_lcl_argument_data.u8_global_status_ & SECOND_BIT) != FALSE)
        {
        /**
        * Treat the case when an error occure during the execution of the passed command
        */

        u8_lcl_program_return = EXIT_FAILURE;
        }
    else
        {
        /**
        * Treat the case when no error occure during the execution of the passed command
        */
        } 

    /**
    * Closing the structure argument data
    */
    u8_lcl_return_from_function = RETURN_FAILURE;
    u8_lcl_return_from_function =  Fu8__structure_argument_close(&sstc_lcl_argument_data);

    /**
    * Check if function to close the structure argument data succeeded
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to close the structure argument data failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to close the structure argument data  failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to close the structure argument data failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to close the structure argument data suucceeded
        */
        } 

    return (u8_lcl_program_return);
    }
