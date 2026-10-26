/* Firmware entry: 0x481312ee */

int FUN_ram_481312ee(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int __denom;
  int __numer;
  div_t dVar3;
  int iStack_18;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  __numer = *(int *)(param_1 + 0x34);
  __denom = *(int *)(param_1 + 0x30);
  if (__numer < __denom) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"flash_hal","E (%lu) %s: Target frequency %dMHz higher than src %dMHz.\n",
                     uVar2,"flash_hal",__denom,__numer);
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e06();
  }
  iVar1 = (__denom + __numer + -1) / __denom;
  dVar3 = div(__numer,__denom);
  if (dVar3.rem == 0) {
    return iVar1;
  }
  uVar2 = FUN_ram_4ff44d14();
  iStack_18 = dVar3.quot;
  FUN_ram_4ff44bf0(2,"flash_hal","W (%lu) %s: Flash clock frequency round down to %d\n",uVar2,
                   "flash_hal",iStack_18);
  return iVar1;
}


