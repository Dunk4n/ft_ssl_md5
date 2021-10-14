/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niduches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:52:10 by niduches          #+#    #+#             */
/*   Updated: 2021/09/13 16:18:08 by niduches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    #include "ssl.h"

void    fv__usage(void)
    {
    fprintf(stdout, "usage: ft_ssl command [flags] [file/string]\n");
    }

void    fv__command_option_help(void)
    {
    /**
    * Creation of local variable
    */
    uint8_t u8_lcl_cnt;

    /**
    * Initialization of local variable
    */
    u8_lcl_cnt = 0;

    fprintf(stdout, "Commands:\n");

    /**
    * Display all the command
    */ 
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < COMMAND_NUMBER)
        {
        fprintf(stdout, "%s\n", command_name[u8_lcl_cnt]);

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
            return ;
            } 
        }

    fprintf(stdout, "\n");
    fprintf(stdout, "Flags:\n");

    /**
    * Display all the simple option
    */ 
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < SIMPLE_OPTION_NUMBER)
        {
        /**
        * Check if the actual option is the first to be displayed
        */
        if(u8_lcl_cnt == 0)
            {
            /**
            * Treat the case when the actual option is the first to be displayed
            */

            /**
            * Display the other option without a space before
            */ 
            fprintf(stdout, "%s", simple_options[u8_lcl_cnt]);
            }
        else
            {
            /**
            * Treat the case when the actual option is not the first to be displayed
            */

            /**
            * Display the other option with a space before
            */ 
            fprintf(stdout, " %s", simple_options[u8_lcl_cnt]);
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
            return ;
            } 
        }

    /**
    * Display all the argument option
    */ 
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < ARGUMENT_OPTION_NUMBER)
        {
        /**
        * Check if the actual option is the first to be displayed
        */
        if((u8_lcl_cnt == 0) && (SIMPLE_OPTION_NUMBER == 0))
            {
            /**
            * Treat the case when the actual option is the first to be displayed
            */

            /**
            * Display the other option without a space before
            */ 
            fprintf(stdout, "%s", argument_options[u8_lcl_cnt]);
            }
        else
            {
            /**
            * Treat the case when the actual option is not the first to be displayed
            */

            /**
            * Display the other option with a space before
            */ 
            fprintf(stdout, " %s", argument_options[u8_lcl_cnt]);
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
            return ;
            } 
        }

    fprintf(stdout, "\n\n");
    }
