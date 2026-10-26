/* Firmware entry: 0x48023570 */

int FUN_ram_48023570(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: Uninitialized Q id 1\n\r\n",uVar2,
                     "os_wrapper_esp");
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return -2;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: Uninitialized Q id 2\n\r\n",uVar2,
                     "os_wrapper_esp");
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return -2;
  }
  uVar3 = 0;
  if (param_3 != 0) {
    if (param_3 < 0) {
      iVar1 = FUN_ram_4ff3b4aa(iVar1,param_2,0xffffffff);
      goto LAB_ram_480235a4;
    }
    uVar3 = (uint)(param_3 * 1000000) / 1000;
  }
  iVar1 = FUN_ram_4ff3b4aa(iVar1,param_2,uVar3);
LAB_ram_480235a4:
  return -(uint)(iVar1 != 1);
}


