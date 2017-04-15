/* $Id: c370.h,v 1.2 1999/11/04 14:02:21 shields Exp $ */
/*
 This software is subject to the terms of the IBM Jikes Compiler
 License Agreement available at the following URL:
 http://www.ibm.com/research/jikes.
 Copyright (C) 1983, 1999, International Business Machines Corporation
 and others.  All Rights Reserved.
 You must accept the terms of that agreement to use this software.
*/
#ifndef C370_INCLUDED
#define C370_INCLUDED

#if defined(C370) || defined(CW)

#define accept_act                       acc_act
#define accept_image                     accptimg
#define action_bit                       actn_bit
#define action_pool                      act_pool
#define action_size                      act_size
#define action_symbols                   actsymbs
#define action_symbols                   actsymbs
#define action_symbols_index_proc        asiproc
#define adequate_item                    adqitem
#define allocate_boolean_array           alcbooln
#define allocate_int_array               alocint
#define allocate_short_array             alocshrt
#define allocate_goto_map                alcgotmp
#define allocate_node                    alocnode
#define allocate_reduce_map              alcredmp
#define allocate_shift_map               alcshfmp
#define allocate_sr_conflict_element     alcsrcnf
#define allocate_rr_conflict_element     alcrrcnf
#define automatic_scope_procs            autoscpr
#define byte_terminal_range              bytterg
#define check_size                       chksize
#define compute_action_symbols_range     compasr
#define compute_closure                  compclo
#define compute_first                    compfrst
#define compute_follow                   compfoll
#define compute_goto_default             c_goto_def
#define compute_la                       cmpt_la
#define compute_naction_symbols_range    compnasr
#define compute_next_conflict_set        cnc_set
#define compute_next_conflict_source     cncsrce
#define compute_next_la                  c_nxt_la
#define compute_shift_default            cmp_shift_def
#define conflict_pool                    cnflpool
#define conflicts_bit                    conflbit
#define conflicts_initialization_done    cid
#define debug_bit                        dbugbit
#define declarations                     declratn
#define default_opt                      def_opt
#define deferred_bit                     dfrdbit
#define deferred_parser_loop             defprslp
#define deferred_recovery_proc           defreclp
#define dump_tables                      dumptabs
#define eoft_conflict_trace              eoftctr
#define eoft_image                       eoftimge
#define eolt_image                       eolimag
#define error_act                        er_act
#define error_image                      errorimg
#define error_maps_bit                   errmpbit
#define error_procs                      errprocs
#define exit_lalrk_process               exitlak
#define init_lalrk_process               initlak
#define init_rmpself                     initrmp
#define file_prefix                      flprefx
#define first_bit                        firstbit
#define first_index                      frstindx
#define follow_bit                       follwbit
#define free_conflict_space              freecsp
#define free_nodes                       freenode
#define free_temporary_space             freetspa
#define global_declarations              globldcl
#define global_space_allocated           gspalloc
#define global_space_used                gspausd
#define goto_default_bit                 gdefbit
#define goto_size                        gotosize
#define gotodom_size                     godm_sze
#define hact_file                        hactfile
#define highest_level                    highstlv
#define increment                        incremt
#define increment_size                   incrsze
#define item_list                        itemlist
#define item_table                       itemtabl
#define la_offset                        laoffset
#define la_state_root                    lastatrt
#define la_traverse                      latravrs
#define lalr_level                       lalrlevl
#define last_index                       lastindx
#define last_non_terminal                lstnontr
#define last_symbol                      lastsymb
#define last_terminal                    lastterm
#define lpgaccess                        laccess
#define macro_declarations               macrdecl
#define manual_scope_procs               manlscpr
#define max_la_state                     mxlastat
#define max_name_length                  maxnmlen
#define maximum_distance                 maxdist
#define minimum_distance                 mindist
#define naction_symbols                  nactnsym
#define naction_symbols                  nactnsym
#define naction_symbols_index_proc       nasiproc
#define names_opt                        namesopt
#define new_state_element                newstelm
#define new_state_elemt                  nwstelmt
#define no_error_procs                   noerprcs
#define non_term_set_size                ntsetsiz
#define nt_check_bit                     ntchkbit
#define num_entries                      n_entrys
#define num_error_rules                  nerrule
#define num_first_sets                   nfrstset
#define num_goto_reduces                 n_gotord
#define num_gotos                        numgotos
#define num_items                        n_items
#define num_names                        n_names
#define num_non_terminals                n_nontml
#define num_reductions                   n_redctn
#define num_rr_conflicts                 n_rrcnfl
#define num_rules                        n_rules
#define num_scopes                       numscps
#define num_shift_maps                   nshftmap
#define num_shift_reduces                n_shred
#define num_shifts                       n_shifts
#define num_single_productions           n_sngprd
#define num_sr_conflicts                 n_sr_cnf
#define num_states                       n_states
#define num_symbols                      n_syms
#define num_table_entries                ntabentr
#define num_terminal_states              nterm_st
#define num_terminals                    n_termnl
#define number_len                       numlen
#define ordered_state                    ordstat
#define output_buffer                    outbuf
#define output_line_no                   oplnnum
#define output_ptr                       outptr
#define output_size                      outptsz
#define overlap_nt_rows                  ovrlntrw
#define overlap_t_rows                   ovrlptrw
#define overlap_tables                   ovrltabl
#define overlay_sim_t_rows               ostermrw
#define parser_loop                      prsrloop
#define previous                         prevs
#define primary_threshold                primthr
#define print_space_parser               prcsppr
#define print_time_parser                prctimp
#define print_item                       prntitem
#define print_large_token                prlrgtok
#define print_relevant_slr_items         prslritm
#define print_state                      pr_state
#define process_conflicts                pcnflcts
#define process_error_maps               perrmps
#define process_input                    prc_inpt
#define process_tables                   p_tables
#define read_input                       readinpt
#define read_reduce_bit                  rdredbit
#define real_shift_number                rshifnm
#define reallocate                       rallcte
#define record_format                    recrdfmt
#define reduce_list                      red_lst
#define reduce_root                      red_root
#define reduce_size                      redcesz
#define remove_single_productions        remsp
#define reset_temporary_space            resettsp
#define resolve_conflicts                rslvconf
#define restore_symbol                   restsym
#define rr_conflict_root                 rrcnflrt
#define scope_rhs_size                   scrhssz
#define scope_right_side                 scrtsde
#define scope_state                      scpstat
#define scope_state_size                 scstsze
#define scopes_bit                       scpbit
#define secondary_threshold              secthrd
#define shift_check_index                shchindx
#define shift_check_size                 shchksz
#define shift_default_bit                shdefbit
#define shift_domain_count               shdmn_ct
#define shift_image                      shimage
#define shift_size                       shftsize
#define single_productions_bit           sp_bit
#define sr_conflict_root                 srcnflrt
#define stack_size                       stksize
#define stat_list                        statlist
#define state_index                      statindx
#define state_list                       statelst
#define state_set_size                   ssetsiz
#define states_bit                       statesbt
#define states_of                        st_of
#define string_offset                    stroffst
#define string_size                      strsize
#define string_table                     s_tab
#define symbol_map                       symbmap
#define symno_size                       symno_sz
#define table_opt                        tab_opt
#define table_size                       tab_size
#define temporary_space_allocated        tspalloc
#define temporary_space_used             tspausd
#define term_action_size                 t_act_sz
#define term_check_size                  t_ch_sze
#define term_set_size                    tsetsiz
#define term_state_index                 tstindx
#define trace_access                     traceac
#define trace_opt                        trce_opt
#define trace_pool                       trace_pl
#define translate                        trnslte
#define verbose_bit                      verb_bit
#define warnings_bit                     warnbit

#endif

#endif /* C370_INCLUDED */
