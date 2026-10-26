/* Firmware entry: 0x48023720 */

undefined4 FUN_ram_48023720(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: Uninitialized sem id 1\n\r\n",uVar2,
                     "os_wrapper_esp");
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xfffffffe;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: Uninitialized sem id 2\n\r\n",uVar2,
                     "os_wrapper_esp");
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xfffffffe;
  }
  uVar3 = 0;
  if (param_2 != 0) {
    if (param_2 < 0) {
      iVar1 = FUN_ram_4ff3b5f0(iVar1,0xffffffff);
      goto LAB_ram_48023756;
    }
    uVar3 = (uint)(param_2 * 1000000) / 1000;
  }
  iVar1 = FUN_ram_4ff3b5f0(iVar1,uVar3);
LAB_ram_48023756:
  uVar2 = 0;
  if (iVar1 != 1) {
    uVar2 = 0xfffffffb;
  }
  return uVar2;
}


