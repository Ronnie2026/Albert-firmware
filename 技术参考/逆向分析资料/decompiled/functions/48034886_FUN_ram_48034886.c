/* Firmware entry: 0x48034886 */

bool FUN_ram_48034886(undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  size_t sVar4;
  int iVar5;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [64];
  undefined1 auStack_24 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  sVar4 = strlen(param_3);
  if (sVar4 != 0x40) {
    return false;
  }
  local_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  memset(auStack_64,0,0x41);
  FUN_ram_4817b062(param_1,param_2,&local_84,0);
  puVar3 = &local_84;
  puVar1 = auStack_64;
  do {
    puVar2 = puVar1 + 2;
    FUN_ram_4819ad74(puVar1,3,&DAT_ram_481c3b70,*(undefined1 *)puVar3);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar1 = puVar2;
  } while (puVar2 != auStack_24);
  iVar5 = FUN_ram_4ff453ae(param_3,auStack_64);
  return iVar5 == 0;
}


