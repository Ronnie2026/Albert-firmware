/* Firmware entry: 0x4814e840 */

int * FUN_ram_4814e840(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar3 = (int *)FUN_ram_48006872(DAT_ram_4ff6e240);
  if (piVar3 != (int *)0x0) {
    return piVar3;
  }
  piVar3 = (int *)FUN_ram_48139392(4);
  if (piVar3 != (int *)0x0) {
    iVar1 = FUN_ram_4ff3add0(1,0,3);
    *piVar3 = iVar1;
    if (iVar1 != 0) {
      FUN_ram_480068a2(DAT_ram_4ff6e240,piVar3);
      return piVar3;
    }
    FUN_ram_481393fc(piVar3);
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"lwip_arch","E (%lu) %s: thread_sem_init: out of memory\n",uVar2,"lwip_arch");
  return (int *)0x0;
}


