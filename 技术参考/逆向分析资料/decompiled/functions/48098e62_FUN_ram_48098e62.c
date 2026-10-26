/* Firmware entry: 0x48098e62 */

void FUN_ram_48098e62(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 auStack_280 [60];
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined1 uStack_23c;
  undefined1 auStack_6c [84];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar5 = auStack_280;
  puVar4 = auStack_280;
  memset(auStack_280,0,0x260);
  uStack_244 = 0xffffffff;
  uStack_240 = 0xffffffff;
  uStack_23c = 0xff;
  do {
    *(undefined4 *)(puVar5 + 0x88) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0x8c) = 0xffffffff;
    puVar5[0x90] = 0xff;
    puVar5 = puVar5 + 0x4c;
  } while (puVar5 != auStack_6c);
  uVar1 = ((param_1 + 8) - param_2) % 8 & 0xff;
  if (param_2 != 0) {
    uVar6 = param_2 + uVar1;
    do {
      uVar3 = uVar1 & 7;
      uVar1 = uVar1 + 1 & 0xff;
      iVar2 = FUN_ram_4ff45158(puVar4,uVar3 * 0x4c + param_3 + 0x3e0,0x4a);
      puVar4 = (undefined1 *)(iVar2 + 0x4c);
    } while ((uVar6 & 0xff) != uVar1);
  }
  FUN_ram_4ff45158(param_3 + 0x3e0,auStack_280,0x260);
  *(char *)(param_3 + 0x227) = (char)param_2;
  return;
}


