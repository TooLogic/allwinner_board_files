/*****************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information and source code
 *  contained herein is confidential. The software including the source code
 *  may not be copied and the information contained herein may not be used or
 *  disclosed except with the written permission of MEMSIC Inc. (C) 2009
 *****************************************************************************/

/**
 * @file
 * @author  Robbie Cao<hjcao@memsic.cn>
 *
 * @brief
 * This file define the interface of acceleration sensor adapter for MXC622x.
 */

#ifndef __SENSORS_ACC_MXC622X_H__
#define __SENSORS_ACC_MXC622X_H__

int acc_mxc622x_init(void);

int acc_mxc622x_open(void);
int acc_mxc622x_close(int fd);

int acc_mxc622x_read_data(int fd, int *data);
int acc_mxc622x_get_offset(int fd, int *offset_xyz);
int acc_mxc622x_set_new_offset(int fd, int *offset_xyz);
int acc_mxc622x_get_sensitivity(int fd, int *sensit_xyz);
int acc_mxc622x_get_install_dir(void);

#endif /* __SENSORS_ACC_MXC622X_H__ */

