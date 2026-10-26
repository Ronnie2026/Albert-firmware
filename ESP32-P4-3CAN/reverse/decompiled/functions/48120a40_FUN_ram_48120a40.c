/* Firmware entry: 0x48120a40 */

void FUN_ram_48120a40(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = FUN_ram_4ff21a0a();
  iVar2 = __divdi3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),1000,0);
  FUN_ram_4ff3ec14(&DAT_ram_4ff47edc,0xffffffff);
  DAT_ram_4ff6bf04 = iVar2;
  DAT_ram_4ff6bf08 = param_1;
  if (DAT_ram_4ff6bf10 == '\0') {
    DAT_ram_4ff6befc = DAT_ram_4ff6befc + 1;
    DAT_ram_4ff6bf10 = 1;
    DAT_ram_4ff6bf00 = iVar2;
    FUN_ram_4ff3ee10(&DAT_ram_4ff47edc);
    return;
  }
  DAT_ram_4ff6befc = DAT_ram_4ff6befc + 1;
  DAT_ram_4ff6bf10 = 1;
  uVar1 = iVar2 - DAT_ram_4ff6bf00;
  FUN_ram_4ff3ee10(&DAT_ram_4ff47edc);
  if (1999 < uVar1) {
    FUN_ram_4ff2b990(5,0xffffffff,param_1);
    return;
  }
  return;
}


