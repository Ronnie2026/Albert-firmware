/* Firmware entry: 0x480880f8 */

bool FUN_ram_480880f8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_ea0 [1204];
  undefined1 auStack_9ec [1204];
  undefined4 local_538 [328];
  undefined4 uStack_18;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar4 = local_538;
  puVar5 = param_1;
  do {
    uVar7 = puVar5[1];
    uVar6 = puVar5[2];
    uVar2 = puVar5[3];
    uVar3 = puVar5[4];
    *puVar4 = *puVar5;
    puVar4[1] = uVar7;
    puVar4[2] = uVar6;
    puVar4[3] = uVar2;
    puVar4[4] = uVar3;
    puVar5 = puVar5 + 5;
    puVar4 = puVar4 + 5;
  } while (puVar5 != param_1 + 0x14a);
  uStack_18 = *param_1;
  memset(auStack_ea0,0,0x4b3);
  memset(auStack_9ec,0,0x4b3);
  iVar1 = FUN_ram_480713be(local_538,0,auStack_ea0);
  if (iVar1 != 0) {
    iVar1 = FUN_ram_480713be(param_2,0,auStack_9ec);
    if (iVar1 != 0) {
      iVar1 = FUN_ram_4ff4511a(auStack_ea0,auStack_9ec,0x4b3);
      return iVar1 == 0;
    }
  }
  return false;
}


