/* Firmware entry: 0x48172770 */

int FUN_ram_48172770(undefined1 *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48174542(&uStack_24,param_2,param_3 - *param_2);
  if (iVar1 == 0) {
    puVar2 = param_1 + 0xc;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 4) = uStack_24;
    *(undefined4 *)(param_1 + 8) = 1;
    FUN_ram_48173f5c(puVar2);
    FUN_ram_4817fb86(param_1 + 0x6c);
    FUN_ram_48173f3a(param_1 + 0x74);
    FUN_ram_48173f3a(param_1 + 0x8c);
    FUN_ram_4817fb86(param_1 + 0xa4);
    iVar1 = FUN_ram_48176468(puVar2,uStack_24);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 8) == 1) {
        iVar1 = FUN_ram_481744d6(puVar2,param_1 + 0x8c,param_2,param_3 - *param_2);
        return iVar1;
      }
      iVar1 = -0x4f80;
    }
    else {
      iVar1 = -0x4e80;
    }
  }
  return iVar1;
}


