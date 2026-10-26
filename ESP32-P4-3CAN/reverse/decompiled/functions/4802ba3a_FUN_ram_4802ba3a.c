/* Firmware entry: 0x4802ba3a */

int FUN_ram_4802ba3a(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  code *pcVar5;
  int iVar6;
  undefined1 local_60 [72];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar4 = local_60;
  iVar3 = FUN_ram_4819afa6(local_60,0x40,param_2,param_3);
  if (iVar3 < 0) {
    return 0;
  }
  if (iVar3 < 0x40) {
    iVar6 = *param_1;
    pcVar5 = *(code **)(iVar6 + 0xc);
  }
  else {
    puVar4 = (undefined1 *)thunk_FUN_ram_4ff2070c(iVar3 + 1);
    if (puVar4 == (undefined1 *)0x0) {
      return 0;
    }
    iVar3 = FUN_ram_4819afa6(puVar4,iVar3 + 1,param_2,param_3);
    iVar6 = *param_1;
    pcVar5 = *(code **)(iVar6 + 0xc);
  }
  if (pcVar5 == FUN_ram_4802b9f2) {
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = 0;
      puVar2 = puVar4;
      while( true ) {
        iVar6 = (**(code **)(iVar6 + 8))(param_1,*puVar2);
        iVar1 = iVar1 + iVar6;
        if (puVar2 == puVar4 + iVar3 + -1) break;
        iVar6 = *param_1;
        puVar2 = puVar2 + 1;
      }
    }
  }
  else {
    iVar1 = (*pcVar5)(param_1,puVar4,iVar3);
  }
  if (puVar4 != local_60) {
    thunk_FUN_ram_4ff209c6(puVar4);
    return iVar1;
  }
  return iVar1;
}


