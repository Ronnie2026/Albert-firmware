/* Firmware entry: 0x480edf6a */

bool FUN_ram_480edf6a(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 local_74 [25];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(local_74,0,100);
  FUN_ram_4ff3ec14(&DAT_ram_4ff69340,0xffffffff);
  puVar6 = &DAT_ram_4ff69f6c;
  puVar5 = local_74;
  do {
    uVar7 = puVar6[1];
    uVar1 = puVar6[2];
    uVar3 = puVar6[3];
    uVar4 = puVar6[4];
    *puVar5 = *puVar6;
    puVar5[1] = uVar7;
    puVar5[2] = uVar1;
    puVar5[3] = uVar3;
    puVar5[4] = uVar4;
    puVar6 = puVar6 + 5;
    puVar5 = puVar5 + 5;
  } while (puVar6 != (undefined4 *)&DAT_ram_4ff69fd0);
  FUN_ram_4ff3ee10(&DAT_ram_4ff69340);
  iVar2 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,"B40P101",0,0);
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = FUN_ram_48122518(&DAT_ram_4ff6dec8,"seats",local_74,100);
  FUN_ram_48122142(&DAT_ram_4ff6dec8);
  FUN_ram_480edc6a(&DAT_ram_4ff60e20,iVar2 == 100);
  return iVar2 == 100;
}


