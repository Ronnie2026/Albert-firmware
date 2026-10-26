/* Firmware entry: 0x4819a9ca */

uint FUN_ram_4819a9ca(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = param_4 * param_3;
  puStack_2c = &uStack_34;
  uStack_28 = 1;
  uStack_34 = param_2;
  iStack_30 = iVar3;
  iStack_24 = iVar3;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x28) == 0)) {
    FUN_ram_4819a44c();
  }
  if (((*(uint *)(param_5 + 100) & 1) == 0) && ((*(ushort *)(param_5 + 0xc) & 0x200) == 0)) {
    FUN_ram_4ff21846(*(undefined4 *)(param_5 + 0x58));
  }
  iVar1 = FUN_ram_4819a644(param_1,param_5,&puStack_2c);
  uVar2 = *(uint *)(param_5 + 100) & 1;
  if (iVar1 == 0) {
    if ((uVar2 == 0) && ((*(ushort *)(param_5 + 0xc) & 0x200) == 0)) {
      FUN_ram_4ff21966(*(undefined4 *)(param_5 + 0x58));
    }
  }
  else {
    if ((uVar2 == 0) && ((*(ushort *)(param_5 + 0xc) & 0x200) == 0)) {
      FUN_ram_4ff21966(*(undefined4 *)(param_5 + 0x58));
    }
    param_4 = (uint)(iVar3 - iStack_24) / param_3;
  }
  return param_4;
}


