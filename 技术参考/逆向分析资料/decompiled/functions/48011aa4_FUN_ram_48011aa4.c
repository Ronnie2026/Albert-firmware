/* Firmware entry: 0x48011aa4 */

undefined4 FUN_ram_48011aa4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6db70 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x68))(10);
  if (DAT_ram_4ff6db70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("serial_drv.c",0xd5,"rpc_platform_init","readSemaphore");
  }
  (**(code **)(PTR_PTR_ram_4ff47e40 + 0x6c))(DAT_ram_4ff6db70,0);
  DAT_ram_4ff6db74 = FUN_ram_48011554(&LAB_ram_48011610);
  if (DAT_ram_4ff6db74 == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial","E (%lu) %s: Serial interface creation failed\n\r\n",uVar2,"serial")
    ;
    if (DAT_ram_4ff6db74 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("serial_drv.c",0xdd,"rpc_platform_init","serial_ll_if_g");
    }
  }
  else {
    iVar1 = (*(code *)**(undefined4 **)(DAT_ram_4ff6db74 + 8))();
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial","E (%lu) %s: Serial interface open failed\n\r\n",uVar2,"serial");
  }
  return 0xffffffff;
}


