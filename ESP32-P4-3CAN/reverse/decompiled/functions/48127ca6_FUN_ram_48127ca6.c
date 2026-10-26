/* Firmware entry: 0x48127ca6 */

undefined4 FUN_ram_48127ca6(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 auStack_64 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [28];
  undefined1 auStack_3c [36];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(int *)(param_2 + 4) != 0) &&
     (iVar3 = FUN_ram_481591b4(*(int *)(param_2 + 4),auStack_64), iVar3 == 0)) {
    FUN_ram_4812181e(auStack_58,uStack_5c);
    FUN_ram_4812181e(auStack_3c,uStack_60);
    FUN_ram_48121726(param_1);
    iVar3 = 0;
    do {
      pbVar4 = (byte *)FUN_ram_48121906(auStack_3c,iVar3);
      bVar1 = *pbVar4;
      pbVar4 = (byte *)FUN_ram_48121906(auStack_58,iVar3);
      bVar2 = *pbVar4;
      pbVar4 = (byte *)FUN_ram_48121906(param_1,iVar3);
      iVar3 = iVar3 + 1;
      *pbVar4 = bVar2 | ~bVar1;
    } while (iVar3 != 4);
    return param_1;
  }
  FUN_ram_48121726(param_1);
  return param_1;
}


