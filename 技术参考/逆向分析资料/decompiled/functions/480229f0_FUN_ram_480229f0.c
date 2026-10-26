/* Firmware entry: 0x480229f0 */

int FUN_ram_480229f0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6dbb4 = 0;
  DAT_ram_4ff6dbb0 = 0;
  iVar2 = FUN_ram_4800fbea(&iStack_24);
  if (iVar2 == 0) {
    uVar6 = (uint)*(ushort *)(iStack_24 + 0x44);
    uVar5 = (uint)*(ushort *)(iStack_24 + 0x46);
    if (uVar6 == 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"H_SDIO_DRV",
                       "W (%lu) %s: provided sdio tx queue size is zero! Setting to %d\n",uVar3,
                       "H_SDIO_DRV",0x14);
      uVar6 = 0x14;
    }
    if (uVar5 == 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"H_SDIO_DRV",
                       "W (%lu) %s: provided sdio rx queue size is zero! Setting to %d\n",uVar3,
                       "H_SDIO_DRV",0x14);
      uVar5 = 0x14;
    }
  }
  else {
    uVar3 = FUN_ram_4ff44d14();
    uVar5 = 0x14;
    FUN_ram_4ff44bf0(2,"H_SDIO_DRV",
                     "W (%lu) %s: failed to get SDIO transport config: using default values\n",uVar3
                     ,"H_SDIO_DRV");
    uVar6 = 0x14;
  }
  DAT_ram_4ff6dbd8 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x54))();
  if (DAT_ram_4ff6dbd8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdio_drv.c",0x50d,"bus_init_internal","sdio_bus_lock");
  }
  DAT_ram_4ff6dbbc = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x68))(uVar6 * 3);
  if (DAT_ram_4ff6dbbc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdio_drv.c",0x510,"bus_init_internal","sem_to_slave_queue");
  }
  (**(code **)(PTR_PTR_ram_4ff47e40 + 0x6c))(DAT_ram_4ff6dbbc,0);
  DAT_ram_4ff6dbb8 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x68))(uVar5 * 3);
  if (DAT_ram_4ff6dbb8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdio_drv.c",0x514,"bus_init_internal","sem_from_slave_queue");
  }
  piVar1 = &DAT_ram_4ff5b2e8;
  (**(code **)(PTR_PTR_ram_4ff47e40 + 0x6c))(DAT_ram_4ff6dbb8,0);
  piVar4 = &DAT_ram_4ff5b2f4;
  do {
    iVar2 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x3c))(uVar5,0x18);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("sdio_drv.c",0x51d,"bus_init_internal","from_slave_queue[prio_q_idx]");
    }
    iVar2 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x3c))(uVar6,0x18);
    *piVar4 = iVar2;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("sdio_drv.c",0x521,"bus_init_internal","to_slave_queue[prio_q_idx]");
    }
    piVar1 = piVar1 + 1;
    piVar4 = piVar4 + 1;
  } while (piVar1 != &DAT_ram_4ff5b2f4);
  DAT_ram_4ff6dbd0 = FUN_ram_4801c372(0x600);
  if (DAT_ram_4ff6dbd0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdio_drv.c",0xda,"sdio_mempool_create","buf_mp_g");
  }
  DAT_ram_4ff6dbcc = (**(code **)(PTR_PTR_ram_4ff47e40 + 0xac))();
  if (DAT_ram_4ff6dbcc == 0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"H_SDIO_DRV","E (%lu) %s: could not create sdio handle, exiting\n\n",uVar3,
                     "H_SDIO_DRV");
    if (DAT_ram_4ff6dbcc == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("sdio_drv.c",0x52b,"bus_init_internal","sdio_handle");
    }
  }
  DAT_ram_4ff48608 = 0;
  DAT_ram_4ff4860c = 0;
  DAT_ram_4ff48610 = 0;
  DAT_ram_4ff48614 = 0;
  DAT_ram_4ff4861c = 0;
  DAT_ram_4ff48620 = 0;
  DAT_ram_4ff48618 = 0xffffffff;
  DAT_ram_4ff6dba8 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x68))(1);
  if (DAT_ram_4ff6dba8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdio_drv.c",0x534,"bus_init_internal","sem_double_buf_xfer_data");
  }
  (**(code **)(PTR_PTR_ram_4ff47e40 + 0x6c))(DAT_ram_4ff6dba8,0);
  DAT_ram_4ff6dba4 =
       (**(code **)(PTR_PTR_ram_4ff47e40 + 0x20))
                 ("sdio_rx_buf",0x13,0xc00,FUN_ram_48021d1e,0,
                  *(code **)(PTR_PTR_ram_4ff47e40 + 0x20));
  DAT_ram_4ff6dbc8 =
       (**(code **)(PTR_PTR_ram_4ff47e40 + 0x20))
                 ("sdio_read",0x13,0x1400,FUN_ram_480224c2,0,*(code **)(PTR_PTR_ram_4ff47e40 + 0x20)
                 );
  DAT_ram_4ff6dbc4 =
       (**(code **)(PTR_PTR_ram_4ff47e40 + 0x20))
                 ("sdio_process_rx",0x13,0x1400,FUN_ram_48021a4e,0,
                  *(code **)(PTR_PTR_ram_4ff47e40 + 0x20));
  DAT_ram_4ff6dbc0 =
       (**(code **)(PTR_PTR_ram_4ff47e40 + 0x20))
                 ("sdio_write",0x13,0x1400,FUN_ram_4802200e,0,
                  *(code **)(PTR_PTR_ram_4ff47e40 + 0x20));
  DAT_ram_4ff6dbd8 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x54))();
  if (DAT_ram_4ff6dbd8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdio_drv.c",0x546,"bus_init_internal","sdio_bus_lock");
  }
  return DAT_ram_4ff6dbcc;
}


