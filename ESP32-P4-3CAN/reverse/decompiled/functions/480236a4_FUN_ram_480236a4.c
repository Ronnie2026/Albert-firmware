/* Firmware entry: 0x480236a4 */

int FUN_ram_480236a4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: Uninitialized mut id 1\n\r\n",uVar2,
                     "os_wrapper_esp");
    iVar1 = -2;
  }
  else if (*param_1 == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: Uninitialized mut id 2\n\r\n",uVar2,
                     "os_wrapper_esp");
    iVar1 = -2;
  }
  else {
    iVar1 = FUN_ram_4ff3b5f0(*param_1,0xffffffff);
    iVar1 = -(uint)(iVar1 != 1);
  }
  return iVar1;
}


