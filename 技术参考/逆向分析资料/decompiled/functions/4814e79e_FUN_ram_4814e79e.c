/* Firmware entry: 0x4814e79e */

int * FUN_ram_4814e79e(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff3afa2(DAT_ram_4ff6e244,0,0,0);
  if (iVar1 == 1) {
    return (int *)0x1;
  }
  FUN_ram_4814e2e6();
  piVar2 = (int *)FUN_ram_48139392(4);
  if (piVar2 != (int *)0x0) {
    iVar1 = FUN_ram_4ff3add0(1,0,3);
    *piVar2 = iVar1;
    if (iVar1 != 0) {
      FUN_ram_480068a2(DAT_ram_4ff6e240,piVar2);
      return piVar2;
    }
    FUN_ram_481393fc(piVar2);
  }
  uVar3 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"lwip_arch","E (%lu) %s: thread_sem_init: out of memory\n",uVar3,"lwip_arch");
  return (int *)0x0;
}


