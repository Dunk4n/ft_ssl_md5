/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niduches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:52:10 by niduches          #+#    #+#             */
/*   Updated: 2021/09/13 16:18:08 by niduches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    #include "ssl.h"

/**
* STRUCTURE hash input
*/
uint8_t Fu8__structure_hash_input_init(hash_input_t *ptr_sstc_pssd_hash_input)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the pointer to the structure hash input is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_input == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash input is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash input is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the structure hash input is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash input is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash input passed as an argument to the function is already initialized
    */
    if((ptr_sstc_pssd_hash_input->u8_global_status_ & FIRST_BIT) != FALSE)
        {
        /**
        * Treat the case when the structure hash input passed as an argument to the function is already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash input passed as an argument to the function is already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure hash input passed as an argument to the function is already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure hash input passed as an argument to the function is not initialized as expected
        */
        }

    /**
    * Setting all the value of the global status of the structure to false
    */
    ptr_sstc_pssd_hash_input->u8_global_status_ = 0;
    ptr_sstc_pssd_hash_input->u8_global_status_ &= NOT_FIRST_BIT;
    ptr_sstc_pssd_hash_input->u8_global_status_ &= NOT_SECOND_BIT;
    ptr_sstc_pssd_hash_input->u8_global_status_ &= NOT_THIRD_BIT;
    ptr_sstc_pssd_hash_input->u8_global_status_ &= NOT_FOURTH_BIT;
    ptr_sstc_pssd_hash_input->u8_global_status_ &= NOT_FIFTH_BIT;
    ptr_sstc_pssd_hash_input->u8_global_status_ &= NOT_SIXTH_BIT;
    ptr_sstc_pssd_hash_input->u8_global_status_ &= NOT_SEVENTH_BIT;
    ptr_sstc_pssd_hash_input->u8_global_status_ &= NOT_EIGHTH_BIT;

    /**
    * Setting the command type to default value no command
    */
    ptr_sstc_pssd_hash_input->e_command_type_ = NO_COMMAND;

    /**
    * Allocating the blob data to hash in the structure hash input as an argument of the function
    */
    ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = NULL;
    ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = (uint8_t *) malloc(sizeof(uint8_t) * 1);

    /**
    * Check if the allocation of the blob data to hash in the structure hash input as an argument of the function failed
    */
    if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
        {
        /**
        * Treat the case when the allocation of the blob data to hash in the structure hash input as an argument of the function failed
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash input as an argument of the function failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the allocation of the blob data to hash in the structure hash input as an argument of the function failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the allocation of the blob data to hash in the structure hash input as an argument of the function succeeded
        */

        /**
        * Setting the first character of blob data to hash in the structure hash input as an argument of the function to nil
        */
        ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_[0] = NIL;

        /**
        * Setting the length of blob data to hash in the structure hash input as an argument of the function to zero
        */
        ptr_sstc_pssd_hash_input->u64_length_of_data_to_hash_ = 0;
        }

    /**
    * Setting the structure hash input to initialized
    */
    ptr_sstc_pssd_hash_input->u8_global_status_ |= FIRST_BIT;

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__structure_hash_input_close(hash_input_t *ptr_sstc_pssd_hash_input)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the pointer to the structure hash input is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_input == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash input is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash input is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the structure hash input is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash input is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash input passed as an argument to the function is not already initialized
    */
    if((ptr_sstc_pssd_hash_input->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure hash input passed as an argument to the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash input passed as an argument to the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure hash input passed as an argument to the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure hash input passed as an argument to the function is initialized as expected
        */
        }

    /**
    * Setting the command type to default value no command
    */
    ptr_sstc_pssd_hash_input->e_command_type_ = NO_COMMAND;

    /**
    * Freeing and setting to null the blob data to hash in the structure hash input as an argument of the function
    */
    (void) free(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_);
    ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = NULL;

    /**
    * Setting the length of blob data to hash in the structure hash input as an argument of the function to zero
    */
    ptr_sstc_pssd_hash_input->u64_length_of_data_to_hash_ = 0;

    /**
    * Setting all the value of the global status of the structure to false
    */
    ptr_sstc_pssd_hash_input->u8_global_status_ = 0;
    ptr_sstc_pssd_hash_input->u8_global_status_ &= NOT_FIRST_BIT;
    ptr_sstc_pssd_hash_input->u8_global_status_ &= NOT_SECOND_BIT;
    ptr_sstc_pssd_hash_input->u8_global_status_ &= NOT_THIRD_BIT;
    ptr_sstc_pssd_hash_input->u8_global_status_ &= NOT_FOURTH_BIT;
    ptr_sstc_pssd_hash_input->u8_global_status_ &= NOT_FIFTH_BIT;
    ptr_sstc_pssd_hash_input->u8_global_status_ &= NOT_SIXTH_BIT;
    ptr_sstc_pssd_hash_input->u8_global_status_ &= NOT_SEVENTH_BIT;
    ptr_sstc_pssd_hash_input->u8_global_status_ &= NOT_EIGHTH_BIT;

    return (RETURN_SUCCESS);
    }

void    Fv__structure_hash_input_display(hash_input_t *ptr_sstc_pssd_hash_input)
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
    * Check if the pointer to the structure hash input is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_input == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash input is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash input is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return to indicate the pointer to the structure hash input is not correctly pointing passed as an argument of the function
        */
        return ;
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash input is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash input passed as an argument to the function is not already initialized
    */
    if((ptr_sstc_pssd_hash_input->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure hash input passed as an argument to the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash input passed as an argument to the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return to indicate the structure hash input passed as an argument to the function is not already initialized
        */
        return ;
        }
    else
        {
        /**
        * Treat the case when  the structure hash input passed as an argument to the function is initialized as expected
        */
        }

    ft_printf("    ***********************************************\n");
    ft_printf("    *             STRUCTURE HASH INPUT            *\n");
    ft_printf("    ***********************************************\n\n");

    /**
    * Check if no command in set in the structure hash input passed in argument of the function
    */
    if(ptr_sstc_pssd_hash_input->e_command_type_ == NO_COMMAND)
        {
        /**
        * Treat the case when no command in set in the structure hash input passed in argument of the function
        */

        ft_printf("COMMAND \033[1;95;40mNOT\033[0m set\n");
        }
    else
        {
        /**
        * Treat the case when a command in set in the structure hash input passed in argument of the function
        */

        /**
        * Check if the command in the structure hash input passed in argument of the function does not exist
        */
        if(ptr_sstc_pssd_hash_input->e_command_type_ >= COMMAND_NUMBER)
            {
            /**
            * Treat the case when the command in the structure hash input passed in argument of the function does not exist
            */

            ft_printf("COMMAND \033[1;91;40mNOT EXIST\033[0m\n");
            }
        else
            {
            /**
            * Treat the case when the command in the structure hash input passed in argument of the function exist
            */

            ft_printf("COMMAND: \033[1;95;40m%s\033[0m\n", command_name[ptr_sstc_pssd_hash_input->e_command_type_]);
            }
        }

    /**
    * Check if the blob data to hash in the structure hash input as an argument of the function is null
    */
    if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
        {
        /**
        * Treat the case when the blob data to hash in the structure hash input as an argument of the function is null
        */

        ft_printf("DATA TO HASH BLOB:     \033[1;95;40mNULL\033[0m\n");
        }
    else
        {
        /**
        * Treat the case when the blob data to hash in the structure hash input as an argument of the function is not null
        */

        ft_printf("DATA TO HASH BLOB: \033[1;95;40m[\033[0m%.*s\033[1;95;40m]\033[0m\n", (uint32_t) ptr_sstc_pssd_hash_input->u64_length_of_data_to_hash_, ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_);
        }

    ft_printf("DATA TO HASH BLOB LENGTH: \033[1;95;40m%" PRIu64 "\033[0m\n", ptr_sstc_pssd_hash_input->u64_length_of_data_to_hash_);

    ft_printf("\n    ***********************************************\n");
    ft_printf("    *           END STRUCTURE HASH INPUT          *\n");
    ft_printf("    ***********************************************\n\n");
    }

uint8_t Fu8__preset_input_data_of_structure_hash_input_from_passed_blob(hash_input_t *ptr_sstc_pssd_hash_input, uint8_t *ptr_u8_pssd_data_blob, uint64_t u64_pssd_data_blob_length)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the pointer to the structure hash input is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_input == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash input is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash input is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the structure hash input is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash input is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash input passed as an argument to the function is not already initialized
    */
    if((ptr_sstc_pssd_hash_input->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure hash input passed as an argument to the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash input passed as an argument to the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure hash input passed as an argument to the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure hash input passed as an argument to the function is initialized as expected
        */
        }

    /**
    * Check if the pointer to the data blob passed as an argument to the function is correctly pointing passed as an argument of the function
    */
    if(ptr_u8_pssd_data_blob == NULL)
        {
        /**
        * Treat the case when the pointer to the data blob passed as an argument to the function is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the data blob passed as an argument to the function is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the data blob passed as an argument to the function is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the data blob passed as an argument to the function is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Creation of local variable
    */
    uint64_t u64_lcl_cnt;

    /**
    * Initialization of local variable
    */
    u64_lcl_cnt = 0;

    /**
    * Resetting the blob data to hash length in the structure hash input passed as an argument to the function to zero
    */
    ptr_sstc_pssd_hash_input->u64_length_of_data_to_hash_ = 0;

    /**
    * Check if the blob data to hash in the structure hash input passed as an argument to the function is null
    */
    if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
        {
        /**
        * Treat the case when the blob data to hash in the structure hash input passed as an argument to the function is null
        */

        /**
        * Check if the size to allocate is zero
        */
        if(u64_pssd_data_blob_length == 0)
            {
            /**
            * Treat the case when the size to allocate is zero
            */

            /**
            * Allocating the blob data to hash in the structure hash input passed as an argument to the function
            */
            ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = NULL;
            ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = (uint8_t *) malloc(sizeof(uint8_t) * 1);

            /**
            * Check if the allocation of the blob data to hash in the structure hash input passed as an argument to the function failed
            */
            if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
                {
                /**
                * Treat the case when the allocation of the blob data to hash in the structure hash input passed as an argument to the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash input passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the allocation of the blob data to hash in the structure hash input passed as an argument to the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the allocation of the blob data to hash in the structure hash input passed as an argument to the function succeeded
                */
                }
            }
        else
            {
            /**
            * Treat the case when the size to allocate is not zero
            */

            /**
            * Allocating the blob data to hash in the structure hash input passed as an argument to the function
            */
            ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = NULL;
            ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = (uint8_t *) malloc(sizeof(uint8_t) * u64_pssd_data_blob_length);

            /**
            * Check if the allocation of the blob data to hash in the structure hash input passed as an argument to the function failed
            */
            if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
                {
                /**
                * Treat the case when the allocation of the blob data to hash in the structure hash input passed as an argument to the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash input passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the allocation of the blob data to hash in the structure hash input passed as an argument to the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the allocation of the blob data to hash in the structure hash input passed as an argument to the function succeeded
                */
                }
            }
        }
    else
        {
        /**
        * Treat the case when the blob data to hash in the structure hash input passed as an argument to the function is not null
        */

        /**
        * Check if the size to allocate is zero
        */
        if(u64_pssd_data_blob_length == 0)
            {
            /**
            * Treat the case when the size to allocate is zero
            */

            /**
            * Reallocating the blob data to hash in the structure hash input passed as an argument to the function
            */
            ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_, sizeof(uint8_t) * 1);

            /**
            * Check if the reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed
            */
            if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash input passed as an argument to the function succeeded
                */
                }
            }
        else
            {
            /**
            * Treat the case when the size to allocate is not zero
            */

            /**
            * Reallocating the blob data to hash in the structure hash input passed as an argument to the function
            */
            ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_, sizeof(uint8_t) * u64_pssd_data_blob_length);

            /**
            * Check if the reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed
            */
            if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash input passed as an argument to the function succeeded
                */
                }
            }
        }

    /**
    * Copying all the data of the data blob passed in argument of the function to the blob data to hash in the structure hash input passed as an argument to the function
    */
    u64_lcl_cnt = 0;
    while(u64_lcl_cnt < u64_pssd_data_blob_length)
        {
        ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_[u64_lcl_cnt] = ptr_u8_pssd_data_blob[u64_lcl_cnt];

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
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Setting the length of the data blob passed in argument of the function to the length of the blob data to hash in the structure hash input passed as an argument to the function
    */
    ptr_sstc_pssd_hash_input->u64_length_of_data_to_hash_ = u64_pssd_data_blob_length;

    /**
    * Setting the structure hash input to input set
    */
    ptr_sstc_pssd_hash_input->u8_global_status_ |= SECOND_BIT;

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__preset_input_data_of_structure_hash_input_from_passed_str(hash_input_t *ptr_sstc_pssd_hash_input, uint8_t *ptr_u8_pssd_data_str)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the pointer to the structure hash input is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_input == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash input is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash input is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the structure hash input is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash input is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash input passed as an argument to the function is not already initialized
    */
    if((ptr_sstc_pssd_hash_input->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure hash input passed as an argument to the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash input passed as an argument to the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure hash input passed as an argument to the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure hash input passed as an argument to the function is initialized as expected
        */
        }

    /**
    * Check if the data string passed as an argument of the function is correctly pointing passed as an argument of the function
    */
    if(ptr_u8_pssd_data_str == NULL)
        {
        /**
        * Treat the case when the data string passed as an argument of the function is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the data string passed as an argument of the function is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the data string passed as an argument of the function is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the data string passed as an argument of the function is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Creation of local variable
    */
    uint64_t u64_lcl_cnt;
    uint64_t u64_lcl_length;

    /**
    * Initialization of local variable
    */
    u64_lcl_cnt    = 0;
    u64_lcl_length = 0;

    /**
    * Getting the length of the data string passed as an argument of the function
    */
    u64_lcl_length = 0;
    while(ptr_u8_pssd_data_str[u64_lcl_length] != NIL)
        {
        /**
        * Checking for overflow
        */
        if(u64_lcl_length < UINT64_MAX)
            {
            u64_lcl_length++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Resetting the blob data to hash length in the structure hash input passed as an argument to the function to zero
    */
    ptr_sstc_pssd_hash_input->u64_length_of_data_to_hash_ = 0;

    /**
    * Check if the blob data to hash in the structure hash input passed as an argument to the function is null
    */
    if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
        {
        /**
        * Treat the case when the blob data to hash in the structure hash input passed as an argument to the function is null
        */

        /**
        * Check if the size to allocate is zero
        */
        if(u64_lcl_length == 0)
            {
            /**
            * Treat the case when the size to allocate is zero
            */

            /**
            * Allocating the blob data to hash in the structure hash input passed as an argument to the function
            */
            ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = NULL;
            ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = (uint8_t *) malloc(sizeof(uint8_t) * 1);

            /**
            * Check if the allocation of the blob data to hash in the structure hash input passed as an argument to the function failed
            */
            if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
                {
                /**
                * Treat the case when the allocation of the blob data to hash in the structure hash input passed as an argument to the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash input passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the allocation of the blob data to hash in the structure hash input passed as an argument to the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the allocation of the blob data to hash in the structure hash input passed as an argument to the function succeeded
                */
                }
            }
        else
            {
            /**
            * Treat the case when the size to allocate the data blob is not zero
            */

            /**
            * Allocating the blob data to hash in the structure hash input passed as an argument to the function
            */
            ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = NULL;
            ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = (uint8_t *) malloc(sizeof(uint8_t) * u64_lcl_length);

            /**
            * Check if the allocation of the blob data to hash in the structure hash input passed as an argument to the function failed
            */
            if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
                {
                /**
                * Treat the case when the allocation of the blob data to hash in the structure hash input passed as an argument to the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash input passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the allocation of the blob data to hash in the structure hash input passed as an argument to the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the allocation of the blob data to hash in the structure hash input passed as an argument to the function succeeded
                */
                }
            }
        }
    else
        {
        /**
        * Treat the case when the blob data to hash in the structure hash input passed as an argument to the function is not null
        */

        /**
        * Check if the size to allocate is zero
        */
        if(u64_lcl_length == 0)
            {
            /**
            * Treat the case when the size to allocate is zero
            */

            /**
            * Reallocating the blob data to hash in the structure hash input passed as an argument to the function
            */
            ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_, sizeof(uint8_t) * 1);

            /**
            * Check if the reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed
            */
            if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash input passed as an argument to the function succeeded
                */
                }
            }
        else
            {
            /**
            * Treat the case when the size to allocate is not zero
            */

            /**
            * Reallocating the blob data to hash in the structure hash input passed as an argument to the function
            */
            ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_, sizeof(uint8_t) * u64_lcl_length);

            /**
            * Check if the reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed
            */
            if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash input passed as an argument to the function succeeded
                */
                }
            }
        }

    /**
    * Copying all the data of the data string passed in argument of the function to the blob data to hash in the structure hash input passed as an argument to the function
    */
    u64_lcl_cnt = 0;
    while(u64_lcl_cnt < u64_lcl_length)
        {
        ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_[u64_lcl_cnt] = ptr_u8_pssd_data_str[u64_lcl_cnt];

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
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Setting the length of the data string passed in argument of the function to the length of the blob data to hash in the structure hash input passed as an argument to the function
    */
    ptr_sstc_pssd_hash_input->u64_length_of_data_to_hash_ = u64_lcl_length;

    /**
    * Setting the structure hash input to input set
    */
    ptr_sstc_pssd_hash_input->u8_global_status_ |= SECOND_BIT;

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__preset_input_data_of_structure_hash_input_from_opened_file(hash_input_t *ptr_sstc_pssd_hash_input, int32_t s32_pssd_file_descriptor)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the pointer to the structure hash input is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_input == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash input is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash input is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the structure hash input is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash input is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash input passed as an argument to the function is not already initialized
    */
    if((ptr_sstc_pssd_hash_input->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure hash input passed as an argument to the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash input passed as an argument to the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure hash input passed as an argument to the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure hash input passed as an argument to the function is initialized as expected
        */
        }

    /**
    * Check if the file descriptor passed in argument of the function is not valid
    */
    if(s32_pssd_file_descriptor < 0)
        {
        /**
        * Treat the case when the file descriptor passed in argument of the function is not valid
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the file descriptor passed in argument of the function is not valid\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the file descriptor passed in argument of the function is not valid
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the file descriptor passed in argument of the function is valid
        */
        }

    /**
    * Creation of local variable
    */
    uint64_t u64_lcl_cnt;
    uint64_t u64_lcl_input_total_length;
    uint8_t  u8_lcl_input_buffer[LIBFT_BUFFER_SIZE];
    ssize_t  sszt_lcl_read_size;

    /**
    * Initialization of local variable
    */
    u64_lcl_cnt                = 0;
    u64_lcl_input_total_length = 0;
    sszt_lcl_read_size         = 0;

    /**
    * Initialization of the input buffer
    */
    u64_lcl_cnt = 0;
    while(u64_lcl_cnt < LIBFT_BUFFER_SIZE)
        {
        u8_lcl_input_buffer[u64_lcl_cnt] = 0;

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
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Check if the blob data to hash in the structure hash input passed as an argument to the function is null
    */
    if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
        {
        /**
        * Treat the case when the blob data to hash in the structure hash input passed as an argument to the function is null
        */

        /**
        * Allocating the blob data to hash in the structure hash input passed as an argument to the function
        */
        ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = NULL;
        ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = (uint8_t *) malloc(sizeof(uint8_t) * 1);

        /**
        * Check if the allocation of the blob data to hash in the structure hash input passed as an argument to the function failed
        */
        if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
            {
            /**
            * Treat the case when the allocation of the blob data to hash in the structure hash input passed as an argument to the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash input passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the allocation of the blob data to hash in the structure hash input passed as an argument to the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the allocation of the blob data to hash in the structure hash input passed as an argument to the function succeeded
            */

            /**
            * Setting the only element of the blob data to hash in the structure hash input passed as an argument of the function to zero
            */
            ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_[0] = 0;

            /**
            * Setting the length of the blob data to hash in the structure hash input passed as an argument to the function to zero
            */
            ptr_sstc_pssd_hash_input->u64_length_of_data_to_hash_ = 0;
            }
        }
    else
        {
        /**
        * Treat the case when the blob data to hash in the structure hash input passed as an argument to the function is not null
        */

        /**
        * Reallocating the blob data to hash in the structure hash input passed as an argument to the function
        */
        ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_, sizeof(uint8_t) * 1);

        /**
        * Check if the reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed
        */
        if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
            {
            /**
            * Treat the case when the reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the reallocation of the blob data to hash in the structure hash input passed as an argument to the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the reallocation of the blob data to hash in the structure hash input passed as an argument to the function succeeded
            */

            /**
            * Setting the only element of the blob data to hash in the structure hash input passed as an argument of the function to zero
            */
            ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_[0] = 0;

            /**
            * Setting the length of the blob data to hash in the structure hash input passed as an argument to the function to zero
            */
            ptr_sstc_pssd_hash_input->u64_length_of_data_to_hash_ = 0;
            }
        }

    /**
    * getting and copying the file input to the input hash data passed in argument of the function
    */
    u64_lcl_input_total_length = 0;
    sszt_lcl_read_size         = 1;
    while(sszt_lcl_read_size > 0)
        {
        /**
        * Read the file input to copy it to the input hash data passed in argument of the function
        */
        sszt_lcl_read_size = -1;
        sszt_lcl_read_size = read(s32_pssd_file_descriptor, u8_lcl_input_buffer, LIBFT_BUFFER_SIZE);

        /**
        * Check if function to read the file input to copy it to the input hash data passed in argument of the function succeeded
        */
        if(sszt_lcl_read_size < 0)
            {
            /**
            * Treat the case when the function to read the file input to copy it to the input hash data passed in argument of the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to read the file input to copy it to the input hash data passed in argument of the function  failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the function to read the file input to copy it to the input hash data passed in argument of the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when function to read the file input to copy it to the input hash data passed in argument of the function suucceeded
            */
            }

        /**
        * Check if the end of file is reach in the file input
        */
        if(sszt_lcl_read_size == 0)
            {
            /**
            * Treat the case when the end of file is reach in the file input
            */

            /**
            * Stop reading from file input when reaching the end of file
            */
            break;
            }
        else
            {
            /**
            * Treat the case when the end of file is not reach in the file input
            */
            }

        /**
        * Check if the number of readed character is too big
        */
        if((uint64_t) sszt_lcl_read_size > UINT64_MAX)
            {
            /**
            * Treat the case when the number of readed character is too big
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the number of readed character is too big\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the number of readed character is too big
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the number of readed character is not too big
            */
            }

        /**
        * Check if the addition of the input total length with the read size overflow
        */
        if(u64_lcl_input_total_length > (UINT64_MAX - sszt_lcl_read_size))
            {
            /**
            * Treat the case when the addition of the input total length with the read size overflow
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the addition of the input total length with the read size overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the addition of the input total length with the read size overflow
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the addition of the input total length with the read size not overflow
            */

            /**
            * Add the read size to the input total length
            */
            u64_lcl_input_total_length = u64_lcl_input_total_length + sszt_lcl_read_size;
            }

        /**
        * Check if the blob data to hash in the structure hash input passed as an argument to the function is not correctly pointing
        */
        if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
            {
            /**
            * Treat the case when the blob data to hash in the structure hash input passed as an argument to the function is not correctly pointing
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the blob data to hash in the structure hash input passed as an argument to the function is not correctly pointing\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the blob data to hash in the structure hash input passed as an argument to the function is not correctly pointing
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the blob data to hash in the structure hash input passed as an argument to the function is correctly pointing
            */
            }

        /**
        * Check if the size to allocate is zero
        */
        if(u64_lcl_input_total_length == 0)
            {
            /**
            * Treat the case when the size to allocate is zero
            */

            /**
            * Reallocating the blob data to hash in the structure hash input passed as an argument to the function to the input total length
            */
            ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_, sizeof(uint8_t) * 1);

            /**
            * Check if the reallocation of the blob data to hash in the structure hash input passed as an argument to the function to the input total length failed
            */
            if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash input passed as an argument to the function to the input total length failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash input passed as an argument to the function to the input total length failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the reallocation of the blob data to hash in the structure hash input passed as an argument to the function to the input total length failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash input passed as an argument to the function to the input total length succeeded
                */
                }
            }
        else
            {
            /**
            * Treat the case when the size to allocate is not zero
            */

            /**
            * Reallocating the blob data to hash in the structure hash input passed as an argument to the function to the input total length
            */
            ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_, sizeof(uint8_t) * u64_lcl_input_total_length);

            /**
            * Check if the reallocation of the blob data to hash in the structure hash input passed as an argument to the function to the input total length failed
            */
            if(ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_ == NULL)
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash input passed as an argument to the function to the input total length failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash input passed as an argument to the function to the input total length failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the reallocation of the blob data to hash in the structure hash input passed as an argument to the function to the input total length failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash input passed as an argument to the function to the input total length succeeded
                */
                }
            }

        /**
        * Copying the content of the input buffer to the blob data to hash in the structure hash input passed as an argument to the function
        */
        u64_lcl_cnt = 0;
        while((u64_lcl_cnt < (uint64_t) sszt_lcl_read_size) && (u64_lcl_cnt < LIBFT_BUFFER_SIZE))
            {
            /**
            * Copying the actual character of the input buffer to the blob data to hash in the structure hash input passed as an argument to the function
            */
            ptr_sstc_pssd_hash_input->ptr_u8_data_to_hash_blob_[ptr_sstc_pssd_hash_input->u64_length_of_data_to_hash_] = u8_lcl_input_buffer[u64_lcl_cnt];

            /**
            * Checking for overflow
            */
            if(ptr_sstc_pssd_hash_input->u64_length_of_data_to_hash_ < UINT64_MAX)
                {
                ptr_sstc_pssd_hash_input->u64_length_of_data_to_hash_++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
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
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return a failure to indicate the counter variable overflow
                */
                return (RETURN_FAILURE);
                }
            }
        }

    /**
    * Setting the structure hash input to input set
    */
    ptr_sstc_pssd_hash_input->u8_global_status_ |= SECOND_BIT;

    return (RETURN_SUCCESS);
    }

/**
* STRUCTURE hash output
*/
uint8_t Fu8__structure_hash_output_init(hash_output_t *ptr_sstc_pssd_hash_output)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the pointer to the structure hash output is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_output == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash output is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash output is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash output passed as an argument to the function is already initialized
    */
    if((ptr_sstc_pssd_hash_output->u8_global_status_ & FIRST_BIT) != FALSE)
        {
        /**
        * Treat the case when the structure hash output passed as an argument to the function is already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash output passed as an argument to the function is already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure hash output passed as an argument to the function is already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure hash output passed as an argument to the function is not initialized as expected
        */
        }

    /**
    * Setting all the value of the global status of the structure to false
    */
    ptr_sstc_pssd_hash_output->u8_global_status_ = 0;
    ptr_sstc_pssd_hash_output->u8_global_status_ &= NOT_FIRST_BIT;
    ptr_sstc_pssd_hash_output->u8_global_status_ &= NOT_SECOND_BIT;
    ptr_sstc_pssd_hash_output->u8_global_status_ &= NOT_THIRD_BIT;
    ptr_sstc_pssd_hash_output->u8_global_status_ &= NOT_FOURTH_BIT;
    ptr_sstc_pssd_hash_output->u8_global_status_ &= NOT_FIFTH_BIT;
    ptr_sstc_pssd_hash_output->u8_global_status_ &= NOT_SIXTH_BIT;
    ptr_sstc_pssd_hash_output->u8_global_status_ &= NOT_SEVENTH_BIT;
    ptr_sstc_pssd_hash_output->u8_global_status_ &= NOT_EIGHTH_BIT;

    /**
    * Setting the command type to default value no command
    */
    ptr_sstc_pssd_hash_output->e_command_type_ = NO_COMMAND;

    /**
    * Allocating the blob data to hash in the structure hash output as an argument of the function
    */
    ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = NULL;
    ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) malloc(sizeof(uint8_t) * 1);

    /**
    * Check if the allocation of the blob data to hash in the structure hash output as an argument of the function failed
    */
    if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
        {
        /**
        * Treat the case when the allocation of the blob data to hash in the structure hash output as an argument of the function failed
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash output as an argument of the function failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the allocation of the blob data to hash in the structure hash output as an argument of the function failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the allocation of the blob data to hash in the structure hash output as an argument of the function succeeded
        */

        /**
        * Setting the first character of blob data to hash in the structure hash output as an argument of the function to nil
        */
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_[0] = NIL;

        /**
        * Setting the length of blob data to hash in the structure hash output as an argument of the function to zero
        */
        ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = 0;
        }

    /**
    * Setting the structure hash output to initialized
    */
    ptr_sstc_pssd_hash_output->u8_global_status_ |= FIRST_BIT;

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__structure_hash_output_close(hash_output_t *ptr_sstc_pssd_hash_output)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the pointer to the structure hash output is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_output == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash output is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash output is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash output passed as an argument to the function is not already initialized
    */
    if((ptr_sstc_pssd_hash_output->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure hash output passed as an argument to the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash output passed as an argument to the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure hash output passed as an argument to the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure hash output passed as an argument to the function is initialized as expected
        */
        }

    /**
    * Setting the command type to default value no command
    */
    ptr_sstc_pssd_hash_output->e_command_type_ = NO_COMMAND;

    /**
    * Freeing and setting to null the blob data to hash in the structure hash output as an argument of the function
    */
    (void) free(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_);
    ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = NULL;

    /**
    * Setting the length of blob data to hash in the structure hash output as an argument of the function to zero
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = 0;

    /**
    * Setting all the value of the global status of the structure to false
    */
    ptr_sstc_pssd_hash_output->u8_global_status_ = 0;
    ptr_sstc_pssd_hash_output->u8_global_status_ &= NOT_FIRST_BIT;
    ptr_sstc_pssd_hash_output->u8_global_status_ &= NOT_SECOND_BIT;
    ptr_sstc_pssd_hash_output->u8_global_status_ &= NOT_THIRD_BIT;
    ptr_sstc_pssd_hash_output->u8_global_status_ &= NOT_FOURTH_BIT;
    ptr_sstc_pssd_hash_output->u8_global_status_ &= NOT_FIFTH_BIT;
    ptr_sstc_pssd_hash_output->u8_global_status_ &= NOT_SIXTH_BIT;
    ptr_sstc_pssd_hash_output->u8_global_status_ &= NOT_SEVENTH_BIT;
    ptr_sstc_pssd_hash_output->u8_global_status_ &= NOT_EIGHTH_BIT;

    return (RETURN_SUCCESS);
    }

void    Fv__structure_hash_output_display(hash_output_t *ptr_sstc_pssd_hash_output)
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
    * Check if the pointer to the structure hash output is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_output == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash output is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return to indicate the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */
        return ;
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash output is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash output passed as an argument to the function is not already initialized
    */
    if((ptr_sstc_pssd_hash_output->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure hash output passed as an argument to the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash output passed as an argument to the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return to indicate the structure hash output passed as an argument to the function is not already initialized
        */
        return ;
        }
    else
        {
        /**
        * Treat the case when  the structure hash output passed as an argument to the function is initialized as expected
        */
        }

    ft_printf("    ***********************************************\n");
    ft_printf("    *             STRUCTURE HASH INPUT            *\n");
    ft_printf("    ***********************************************\n\n");

    /**
    * Check if no command in set in the structure hash output passed in argument of the function
    */
    if(ptr_sstc_pssd_hash_output->e_command_type_ == NO_COMMAND)
        {
        /**
        * Treat the case when no command in set in the structure hash output passed in argument of the function
        */

        ft_printf("COMMAND \033[1;95;40mNOT\033[0m set\n");
        }
    else
        {
        /**
        * Treat the case when a command in set in the structure hash output passed in argument of the function
        */

        /**
        * Check if the command in the structure hash output passed in argument of the function does not exist
        */
        if(ptr_sstc_pssd_hash_output->e_command_type_ >= COMMAND_NUMBER)
            {
            /**
            * Treat the case when the command in the structure hash output passed in argument of the function does not exist
            */

            ft_printf("COMMAND \033[1;91;40mNOT EXIST\033[0m\n");
            }
        else
            {
            /**
            * Treat the case when the command in the structure hash output passed in argument of the function exist
            */

            ft_printf("COMMAND: \033[1;95;40m%s\033[0m\n", command_name[ptr_sstc_pssd_hash_output->e_command_type_]);
            }
        }

    /**
    * Check if the blob data to hash in the structure hash output as an argument of the function is null
    */
    if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output as an argument of the function is null
        */

        ft_printf("DATA TO HASH BLOB:     \033[1;95;40mNULL\033[0m\n");
        }
    else
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output as an argument of the function is not null
        */

        ft_printf("DATA TO HASH BLOB: \033[1;95;40m[\033[0m");

        (void) Fv__print_blob_in_hexadecimal(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_, ptr_sstc_pssd_hash_output->u64_length_hashed_data_);

        ft_printf("\033[1;95;40m]\033[0m\n");
        }

    ft_printf("DATA TO HASH BLOB LENGTH: \033[1;95;40m%" PRIu64 "\033[0m\n", ptr_sstc_pssd_hash_output->u64_length_hashed_data_);

    ft_printf("\n    ***********************************************\n");
    ft_printf("    *           END STRUCTURE HASH INPUT          *\n");
    ft_printf("    ***********************************************\n\n");
    }

uint8_t Fu8__preset_output_data_of_structure_hash_output_from_passed_blob(hash_output_t *ptr_sstc_pssd_hash_output, uint8_t *ptr_u8_pssd_data_blob, uint64_t u64_pssd_data_blob_length)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the pointer to the structure hash output is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_output == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash output is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash output is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash output passed as an argument to the function is not already initialized
    */
    if((ptr_sstc_pssd_hash_output->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure hash output passed as an argument to the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash output passed as an argument to the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure hash output passed as an argument to the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure hash output passed as an argument to the function is initialized as expected
        */
        }

    /**
    * Check if the pointer to the data blob passed as an argument to the function is correctly pointing passed as an argument of the function
    */
    if(ptr_u8_pssd_data_blob == NULL)
        {
        /**
        * Treat the case when the pointer to the data blob passed as an argument to the function is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the data blob passed as an argument to the function is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the data blob passed as an argument to the function is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the data blob passed as an argument to the function is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Creation of local variable
    */
    uint64_t u64_lcl_cnt;

    /**
    * Initialization of local variable
    */
    u64_lcl_cnt = 0;

    /**
    * Resetting the blob data to hash length in the structure hash output passed as an argument to the function to zero
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = 0;

    /**
    * Check if the blob data to hash in the structure hash output passed as an argument to the function is null
    */
    if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is null
        */

        /**
        * Check if the size to allocate is zero
        */
        if(u64_pssd_data_blob_length == 0)
            {
            /**
            * Treat the case when the size to allocate is zero
            */

            /**
            * Allocating the blob data to hash in the structure hash output passed as an argument to the function
            */
            ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = NULL;
            ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) malloc(sizeof(uint8_t) * 1);

            /**
            * Check if the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
                {
                /**
                * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
                */
                }
            }
        else
            {
            /**
            * Treat the case when the size to allocate is not zero
            */

            /**
            * Allocating the blob data to hash in the structure hash output passed as an argument to the function
            */
            ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = NULL;
            ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) malloc(sizeof(uint8_t) * u64_pssd_data_blob_length);

            /**
            * Check if the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
                {
                /**
                * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
                */
                }
            }
        }
    else
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is not null
        */

        /**
        * Check if the size to allocate is zero
        */
        if(u64_pssd_data_blob_length == 0)
            {
            /**
            * Treat the case when the size to allocate is zero
            */

            /**
            * Reallocating the blob data to hash in the structure hash output passed as an argument to the function
            */
            ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_, sizeof(uint8_t) * 1);

            /**
            * Check if the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
                */
                }
            }
        else
            {
            /**
            * Treat the case when the size to allocate is not zero
            */

            /**
            * Reallocating the blob data to hash in the structure hash output passed as an argument to the function
            */
            ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_, sizeof(uint8_t) * u64_pssd_data_blob_length);

            /**
            * Check if the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
                */
                }
            }
        }

    /**
    * Copying all the data of the data blob passed in argument of the function to the blob data to hash in the structure hash output passed as an argument to the function
    */
    u64_lcl_cnt = 0;
    while(u64_lcl_cnt < u64_pssd_data_blob_length)
        {
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_[u64_lcl_cnt] = ptr_u8_pssd_data_blob[u64_lcl_cnt];

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
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Setting the length of the data blob passed in argument of the function to the length of the blob data to hash in the structure hash output passed as an argument to the function
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = u64_pssd_data_blob_length;

    /**
    * Setting the structure hash output to output set
    */
    ptr_sstc_pssd_hash_output->u8_global_status_ |= SECOND_BIT;

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__preset_output_data_of_structure_hash_output_from_passed_str(hash_output_t *ptr_sstc_pssd_hash_output, uint8_t *ptr_u8_pssd_data_str)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the pointer to the structure hash output is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_output == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash output is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash output is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash output passed as an argument to the function is not already initialized
    */
    if((ptr_sstc_pssd_hash_output->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure hash output passed as an argument to the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash output passed as an argument to the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure hash output passed as an argument to the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure hash output passed as an argument to the function is initialized as expected
        */
        }

    /**
    * Check if the data string passed as an argument of the function is correctly pointing passed as an argument of the function
    */
    if(ptr_u8_pssd_data_str == NULL)
        {
        /**
        * Treat the case when the data string passed as an argument of the function is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the data string passed as an argument of the function is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the data string passed as an argument of the function is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the data string passed as an argument of the function is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Creation of local variable
    */
    uint64_t u64_lcl_cnt;
    uint64_t u64_lcl_length;

    /**
    * Initialization of local variable
    */
    u64_lcl_cnt    = 0;
    u64_lcl_length = 0;

    /**
    * Getting the length of the data string passed as an argument of the function
    */
    u64_lcl_length = 0;
    while(ptr_u8_pssd_data_str[u64_lcl_length] != NIL)
        {
        /**
        * Checking for overflow
        */
        if(u64_lcl_length < UINT64_MAX)
            {
            u64_lcl_length++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Resetting the blob data to hash length in the structure hash output passed as an argument to the function to zero
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = 0;

    /**
    * Check if the blob data to hash in the structure hash output passed as an argument to the function is null
    */
    if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is null
        */

        /**
        * Check if the size to allocate is zero
        */
        if(u64_lcl_length == 0)
            {
            /**
            * Treat the case when the size to allocate is zero
            */

            /**
            * Allocating the blob data to hash in the structure hash output passed as an argument to the function
            */
            ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = NULL;
            ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) malloc(sizeof(uint8_t) * 1);

            /**
            * Check if the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
                {
                /**
                * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
                */
                }
            }
        else
            {
            /**
            * Treat the case when the size to allocate is not zero
            */

            /**
            * Allocating the blob data to hash in the structure hash output passed as an argument to the function
            */
            ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = NULL;
            ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) malloc(sizeof(uint8_t) * u64_lcl_length);

            /**
            * Check if the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
                {
                /**
                * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
                */
                }
            }
        }
    else
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is not null
        */

        /**
        * Check if the size to allocate is zero
        */
        if(u64_lcl_length == 0)
            {
            /**
            * Treat the case when the size to allocate is zero
            */

            /**
            * Reallocating the blob data to hash in the structure hash output passed as an argument to the function
            */
            ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_, sizeof(uint8_t) * 1);

            /**
            * Check if the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
                */
                }
            }
        else
            {
            /**
            * Treat the case when the size to allocate is not zero
            */

            /**
            * Reallocating the blob data to hash in the structure hash output passed as an argument to the function
            */
            ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_, sizeof(uint8_t) * u64_lcl_length);

            /**
            * Check if the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
                */
                }
            }
        }

    /**
    * Copying all the data of the data string passed in argument of the function to the blob data to hash in the structure hash output passed as an argument to the function
    */
    u64_lcl_cnt = 0;
    while(u64_lcl_cnt < u64_lcl_length)
        {
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_[u64_lcl_cnt] = ptr_u8_pssd_data_str[u64_lcl_cnt];

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
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Setting the length of the data string passed in argument of the function to the length of the blob data to hash in the structure hash output passed as an argument to the function
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = u64_lcl_length;

    /**
    * Setting the structure hash output to output set
    */
    ptr_sstc_pssd_hash_output->u8_global_status_ |= SECOND_BIT;

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__preset_output_data_of_structure_hash_output_from_passed_four_u32(hash_output_t *ptr_sstc_pssd_hash_output, uint32_t u32_pssd_first_data, uint32_t u32_pssd_second_data, uint32_t u32_pssd_third_data, uint32_t u32_pssd_fourth_data)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the pointer to the structure hash output is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_output == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash output is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash output is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash output passed as an argument to the function is not already initialized
    */
    if((ptr_sstc_pssd_hash_output->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure hash output passed as an argument to the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash output passed as an argument to the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure hash output passed as an argument to the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure hash output passed as an argument to the function is initialized as expected
        */
        }

    /**
    * Resetting the blob data to hash length in the structure hash output passed as an argument to the function to zero
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = 0;

    /**
    * Check if the blob data to hash in the structure hash output passed as an argument to the function is null
    */
    if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is null
        */

        /**
        * Allocating the blob data to hash in the structure hash output passed as an argument to the function
        */
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = NULL;
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) malloc(sizeof(uint32_t) * 4);

        /**
        * Check if the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
        */
        if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
            {
            /**
            * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
            */
            }
        }
    else
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is not null
        */


        /**
        * Reallocating the blob data to hash in the structure hash output passed as an argument to the function
        */
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_, sizeof(uint32_t) * 4);

        /**
        * Check if the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
        */
        if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
            {
            /**
            * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
            */
            }
        }

    /**
    * Copying all the data of the four data passed in argument of the function to the blob data to hash in the structure hash output passed as an argument to the function
    */
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[0] = u32_pssd_first_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[1] = u32_pssd_second_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[2] = u32_pssd_third_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[3] = u32_pssd_fourth_data;

    /**
    * Setting the ize of the four data passed in argument of the function to the length of the blob data to hash in the structure hash output passed as an argument to the function
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = (uint64_t) (sizeof(uint32_t) * 4);

    /**
    * Setting the structure hash output to output set
    */
    ptr_sstc_pssd_hash_output->u8_global_status_ |= SECOND_BIT;

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__preset_output_data_of_structure_hash_output_from_passed_five_u32(hash_output_t *ptr_sstc_pssd_hash_output, uint32_t u32_pssd_first_data, uint32_t u32_pssd_second_data, uint32_t u32_pssd_third_data, uint32_t u32_pssd_fourth_data, uint32_t u32_pssd_fifth_data)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the pointer to the structure hash output is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_output == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash output is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash output is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash output passed as an argument to the function is not already initialized
    */
    if((ptr_sstc_pssd_hash_output->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure hash output passed as an argument to the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash output passed as an argument to the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure hash output passed as an argument to the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure hash output passed as an argument to the function is initialized as expected
        */
        }

    /**
    * Resetting the blob data to hash length in the structure hash output passed as an argument to the function to zero
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = 0;

    /**
    * Check if the blob data to hash in the structure hash output passed as an argument to the function is null
    */
    if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is null
        */

        /**
        * Allocating the blob data to hash in the structure hash output passed as an argument to the function
        */
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = NULL;
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) malloc(sizeof(uint32_t) * 5);

        /**
        * Check if the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
        */
        if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
            {
            /**
            * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
            */
            }
        }
    else
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is not null
        */


        /**
        * Reallocating the blob data to hash in the structure hash output passed as an argument to the function
        */
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_, sizeof(uint32_t) * 5);

        /**
        * Check if the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
        */
        if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
            {
            /**
            * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
            */
            }
        }

    /**
    * Copying all the data of the four data passed in argument of the function to the blob data to hash in the structure hash output passed as an argument to the function
    */
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[0] = u32_pssd_first_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[1] = u32_pssd_second_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[2] = u32_pssd_third_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[3] = u32_pssd_fourth_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[4] = u32_pssd_fifth_data;

    /**
    * Setting the ize of the four data passed in argument of the function to the length of the blob data to hash in the structure hash output passed as an argument to the function
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = (uint64_t) (sizeof(uint32_t) * 5);

    /**
    * Setting the structure hash output to output set
    */
    ptr_sstc_pssd_hash_output->u8_global_status_ |= SECOND_BIT;

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__preset_output_data_of_structure_hash_output_from_passed_seven_u32(hash_output_t *ptr_sstc_pssd_hash_output, uint32_t u32_pssd_first_data, uint32_t u32_pssd_second_data, uint32_t u32_pssd_third_data, uint32_t u32_pssd_fourth_data, uint32_t u32_pssd_fifth_data, uint32_t u32_pssd_sixth_data, uint32_t u32_pssd_seventh_data)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the pointer to the structure hash output is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_output == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash output is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash output is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash output passed as an argument to the function is not already initialized
    */
    if((ptr_sstc_pssd_hash_output->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure hash output passed as an argument to the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash output passed as an argument to the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure hash output passed as an argument to the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure hash output passed as an argument to the function is initialized as expected
        */
        }

    /**
    * Resetting the blob data to hash length in the structure hash output passed as an argument to the function to zero
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = 0;

    /**
    * Check if the blob data to hash in the structure hash output passed as an argument to the function is null
    */
    if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is null
        */

        /**
        * Allocating the blob data to hash in the structure hash output passed as an argument to the function
        */
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = NULL;
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) malloc(sizeof(uint32_t) * 7);

        /**
        * Check if the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
        */
        if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
            {
            /**
            * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
            */
            }
        }
    else
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is not null
        */


        /**
        * Reallocating the blob data to hash in the structure hash output passed as an argument to the function
        */
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_, sizeof(uint32_t) * 7);

        /**
        * Check if the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
        */
        if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
            {
            /**
            * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
            */
            }
        }

    /**
    * Copying all the data of the four data passed in argument of the function to the blob data to hash in the structure hash output passed as an argument to the function
    */
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[0] = u32_pssd_first_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[1] = u32_pssd_second_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[2] = u32_pssd_third_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[3] = u32_pssd_fourth_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[4] = u32_pssd_fifth_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[5] = u32_pssd_sixth_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[6] = u32_pssd_seventh_data;

    /**
    * Setting the ize of the four data passed in argument of the function to the length of the blob data to hash in the structure hash output passed as an argument to the function
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = (uint64_t) (sizeof(uint32_t) * 7);

    /**
    * Setting the structure hash output to output set
    */
    ptr_sstc_pssd_hash_output->u8_global_status_ |= SECOND_BIT;

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__preset_output_data_of_structure_hash_output_from_passed_eight_u32(hash_output_t *ptr_sstc_pssd_hash_output, uint32_t u32_pssd_first_data, uint32_t u32_pssd_second_data, uint32_t u32_pssd_third_data, uint32_t u32_pssd_fourth_data, uint32_t u32_pssd_fifth_data, uint32_t u32_pssd_sixth_data, uint32_t u32_pssd_seventh_data, uint32_t u32_pssd_eighth_data)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the pointer to the structure hash output is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_output == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash output is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash output is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash output passed as an argument to the function is not already initialized
    */
    if((ptr_sstc_pssd_hash_output->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure hash output passed as an argument to the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash output passed as an argument to the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure hash output passed as an argument to the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure hash output passed as an argument to the function is initialized as expected
        */
        }

    /**
    * Resetting the blob data to hash length in the structure hash output passed as an argument to the function to zero
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = 0;

    /**
    * Check if the blob data to hash in the structure hash output passed as an argument to the function is null
    */
    if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is null
        */

        /**
        * Allocating the blob data to hash in the structure hash output passed as an argument to the function
        */
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = NULL;
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) malloc(sizeof(uint32_t) * 8);

        /**
        * Check if the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
        */
        if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
            {
            /**
            * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
            */
            }
        }
    else
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is not null
        */


        /**
        * Reallocating the blob data to hash in the structure hash output passed as an argument to the function
        */
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_, sizeof(uint32_t) * 8);

        /**
        * Check if the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
        */
        if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
            {
            /**
            * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
            */
            }
        }

    /**
    * Copying all the data of the four data passed in argument of the function to the blob data to hash in the structure hash output passed as an argument to the function
    */
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[0] = u32_pssd_first_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[1] = u32_pssd_second_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[2] = u32_pssd_third_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[3] = u32_pssd_fourth_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[4] = u32_pssd_fifth_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[5] = u32_pssd_sixth_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[6] = u32_pssd_seventh_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[7] = u32_pssd_eighth_data;

    /**
    * Setting the ize of the four data passed in argument of the function to the length of the blob data to hash in the structure hash output passed as an argument to the function
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = (uint64_t) (sizeof(uint32_t) * 8);

    /**
    * Setting the structure hash output to output set
    */
    ptr_sstc_pssd_hash_output->u8_global_status_ |= SECOND_BIT;

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__preset_output_data_of_structure_hash_output_from_passed_ten_u32(hash_output_t *ptr_sstc_pssd_hash_output, uint32_t u32_pssd_first_data, uint32_t u32_pssd_second_data, uint32_t u32_pssd_third_data, uint32_t u32_pssd_fourth_data, uint32_t u32_pssd_fifth_data, uint32_t u32_pssd_sixth_data, uint32_t u32_pssd_seventh_data, uint32_t u32_pssd_eighth_data, uint32_t u32_pssd_nineth_data, uint32_t u32_pssd_tenth_data)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the pointer to the structure hash output is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_output == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash output is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash output is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash output passed as an argument to the function is not already initialized
    */
    if((ptr_sstc_pssd_hash_output->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure hash output passed as an argument to the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash output passed as an argument to the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure hash output passed as an argument to the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure hash output passed as an argument to the function is initialized as expected
        */
        }

    /**
    * Resetting the blob data to hash length in the structure hash output passed as an argument to the function to zero
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = 0;

    /**
    * Check if the blob data to hash in the structure hash output passed as an argument to the function is null
    */
    if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is null
        */

        /**
        * Allocating the blob data to hash in the structure hash output passed as an argument to the function
        */
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = NULL;
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) malloc(sizeof(uint32_t) * 10);

        /**
        * Check if the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
        */
        if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
            {
            /**
            * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
            */
            }
        }
    else
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is not null
        */


        /**
        * Reallocating the blob data to hash in the structure hash output passed as an argument to the function
        */
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_, sizeof(uint32_t) * 10);

        /**
        * Check if the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
        */
        if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
            {
            /**
            * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
            */
            }
        }

    /**
    * Copying all the data of the four data passed in argument of the function to the blob data to hash in the structure hash output passed as an argument to the function
    */
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[0] = u32_pssd_first_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[1] = u32_pssd_second_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[2] = u32_pssd_third_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[3] = u32_pssd_fourth_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[4] = u32_pssd_fifth_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[5] = u32_pssd_sixth_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[6] = u32_pssd_seventh_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[7] = u32_pssd_eighth_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[8] = u32_pssd_nineth_data;
    ((uint32_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[9] = u32_pssd_tenth_data;

    /**
    * Setting the ize of the four data passed in argument of the function to the length of the blob data to hash in the structure hash output passed as an argument to the function
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = (uint64_t) (sizeof(uint32_t) * 10);

    /**
    * Setting the structure hash output to output set
    */
    ptr_sstc_pssd_hash_output->u8_global_status_ |= SECOND_BIT;

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__preset_output_data_of_structure_hash_output_from_passed_six_u64(hash_output_t *ptr_sstc_pssd_hash_output, uint64_t u64_pssd_first_data, uint64_t u64_pssd_second_data, uint64_t u64_pssd_third_data, uint64_t u64_pssd_fourth_data, uint64_t u64_pssd_fifth_data, uint64_t u64_pssd_sixth_data)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the pointer to the structure hash output is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_output == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash output is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash output is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash output passed as an argument to the function is not already initialized
    */
    if((ptr_sstc_pssd_hash_output->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure hash output passed as an argument to the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash output passed as an argument to the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure hash output passed as an argument to the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure hash output passed as an argument to the function is initialized as expected
        */
        }

    /**
    * Resetting the blob data to hash length in the structure hash output passed as an argument to the function to zero
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = 0;

    /**
    * Check if the blob data to hash in the structure hash output passed as an argument to the function is null
    */
    if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is null
        */

        /**
        * Allocating the blob data to hash in the structure hash output passed as an argument to the function
        */
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = NULL;
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) malloc(sizeof(uint64_t) * 6);

        /**
        * Check if the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
        */
        if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
            {
            /**
            * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
            */
            }
        }
    else
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is not null
        */


        /**
        * Reallocating the blob data to hash in the structure hash output passed as an argument to the function
        */
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_, sizeof(uint64_t) * 6);

        /**
        * Check if the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
        */
        if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
            {
            /**
            * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
            */
            }
        }

    /**
    * Copying all the data of the four data passed in argument of the function to the blob data to hash in the structure hash output passed as an argument to the function
    */
    ((uint64_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[0] = u64_pssd_first_data;
    ((uint64_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[1] = u64_pssd_second_data;
    ((uint64_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[2] = u64_pssd_third_data;
    ((uint64_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[3] = u64_pssd_fourth_data;
    ((uint64_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[4] = u64_pssd_fifth_data;
    ((uint64_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[5] = u64_pssd_sixth_data;

    /**
    * Setting the ize of the four data passed in argument of the function to the length of the blob data to hash in the structure hash output passed as an argument to the function
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = (uint64_t) (sizeof(uint64_t) * 6);

    /**
    * Setting the structure hash output to output set
    */
    ptr_sstc_pssd_hash_output->u8_global_status_ |= SECOND_BIT;

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__preset_output_data_of_structure_hash_output_from_passed_eight_u64(hash_output_t *ptr_sstc_pssd_hash_output, uint64_t u64_pssd_first_data, uint64_t u64_pssd_second_data, uint64_t u64_pssd_third_data, uint64_t u64_pssd_fourth_data, uint64_t u64_pssd_fifth_data, uint64_t u64_pssd_sixth_data, uint64_t u64_pssd_seventh_data, uint64_t u64_pssd_eighth_data)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the pointer to the structure hash output is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_hash_output == NULL)
        {
        /**
        * Treat the case when the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer to the structure hash output is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer to the structure hash output is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer to the structure hash output is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure hash output passed as an argument to the function is not already initialized
    */
    if((ptr_sstc_pssd_hash_output->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure hash output passed as an argument to the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure hash output passed as an argument to the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure hash output passed as an argument to the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure hash output passed as an argument to the function is initialized as expected
        */
        }

    /**
    * Resetting the blob data to hash length in the structure hash output passed as an argument to the function to zero
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = 0;

    /**
    * Check if the blob data to hash in the structure hash output passed as an argument to the function is null
    */
    if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is null
        */

        /**
        * Allocating the blob data to hash in the structure hash output passed as an argument to the function
        */
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = NULL;
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) malloc(sizeof(uint64_t) * 8);

        /**
        * Check if the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
        */
        if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
            {
            /**
            * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the allocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the allocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
            */
            }
        }
    else
        {
        /**
        * Treat the case when the blob data to hash in the structure hash output passed as an argument to the function is not null
        */


        /**
        * Reallocating the blob data to hash in the structure hash output passed as an argument to the function
        */
        ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ = (uint8_t *) realloc(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_, sizeof(uint64_t) * 8);

        /**
        * Check if the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
        */
        if(ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_ == NULL)
            {
            /**
            * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the reallocation of the blob data to hash in the structure hash output passed as an argument to the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the reallocation of the blob data to hash in the structure hash output passed as an argument to the function succeeded
            */
            }
        }

    /**
    * Copying all the data of the four data passed in argument of the function to the blob data to hash in the structure hash output passed as an argument to the function
    */
    ((uint64_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[0] = u64_pssd_first_data;
    ((uint64_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[1] = u64_pssd_second_data;
    ((uint64_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[2] = u64_pssd_third_data;
    ((uint64_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[3] = u64_pssd_fourth_data;
    ((uint64_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[4] = u64_pssd_fifth_data;
    ((uint64_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[5] = u64_pssd_sixth_data;
    ((uint64_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[6] = u64_pssd_seventh_data;
    ((uint64_t *) ptr_sstc_pssd_hash_output->ptr_u8_hashed_data_blob_)[7] = u64_pssd_eighth_data;

    /**
    * Setting the ize of the four data passed in argument of the function to the length of the blob data to hash in the structure hash output passed as an argument to the function
    */
    ptr_sstc_pssd_hash_output->u64_length_hashed_data_ = (uint64_t) (sizeof(uint64_t) * 8);

    /**
    * Setting the structure hash output to output set
    */
    ptr_sstc_pssd_hash_output->u8_global_status_ |= SECOND_BIT;

    return (RETURN_SUCCESS);
    }
