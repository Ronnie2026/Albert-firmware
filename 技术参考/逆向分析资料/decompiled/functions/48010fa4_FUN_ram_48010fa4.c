/* Firmware entry: 0x48010fa4 */

int FUN_ram_48010fa4(undefined4 *param_1,short *param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_2 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  iStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  if ((param_1 == (undefined4 *)0x0) || (*(char *)(param_1 + 3) != '\x01')) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial_ll","E (%lu) %s: serial invalid interface\n",uVar2,"serial_ll");
  }
  else {
    iVar1 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x40))
                      (*param_1,&uStack_28,0xffffffff,param_4,param_5,
                       *(code **)(PTR_PTR_ram_4ff47e40 + 0x40));
    if (iVar1 == 0) {
      if ((iStack_20 != 0) && (uStack_1c._2_2_ != 0)) {
        *param_2 = uStack_1c._2_2_;
        return iStack_20;
      }
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"serial_ll","E (%lu) %s: %s: Dequeue result in empty buffer\n",uVar2,
                       "serial_ll","serial_ll_read");
    }
    else {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"serial_ll","E (%lu) %s: serial queue recv failed \n",uVar2,"serial_ll");
    }
  }
  return 0;
}


