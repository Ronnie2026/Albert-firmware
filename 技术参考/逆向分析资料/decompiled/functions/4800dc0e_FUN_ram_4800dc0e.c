/* Firmware entry: 0x4800dc0e */

int FUN_ram_4800dc0e(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int aiStack_34 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_3 < 0x41) && (param_4 < 0x41)) && ((int)param_3 <= (int)param_4)) {
    aiStack_34[0] = 0;
    iVar3 = FUN_ram_4800db50(&DAT_ram_481df390,0xffffffff,param_1,param_2,aiStack_34);
    if (iVar3 != 0) {
      return iVar3;
    }
    FUN_ram_4ff216d6(&DAT_ram_4ff6db24);
    iVar3 = aiStack_34[0];
    if ((int)param_3 < (int)param_4) {
      puVar6 = &DAT_ram_4ff483a0 + param_3 * 3;
      uVar2 = param_3;
      puVar4 = puVar6;
LAB_ram_4800dcba:
      if (puVar4[1] == -1) goto LAB_ram_4800dc9e;
      puVar5 = &DAT_ram_4ff5a02c + aiStack_34[0];
      thunk_FUN_ram_4ff209c6(*puVar5);
      *puVar5 = 0;
      if ((int)param_3 < (int)uVar2) {
        do {
          if ((char)puVar6[1] == iVar3) {
            iVar1 = param_3 * 3;
            (&DAT_ram_4ff483a0)[iVar1] = 0;
            (&DAT_ram_4ff483a1)[iVar1] = 0;
            (&DAT_ram_4ff483a2)[iVar1] = 0;
            puVar6[1] = 0xff;
            puVar6[2] = 0xff;
          }
          param_3 = param_3 + 1;
          puVar6 = puVar6 + 3;
        } while (param_3 != uVar2);
      }
      FUN_ram_4ff216e2(&DAT_ram_4ff6db24);
      goto LAB_ram_4800dc56;
    }
LAB_ram_4800dd3e:
    FUN_ram_4ff216e2(&DAT_ram_4ff6db24);
    iVar3 = 0;
  }
  else {
LAB_ram_4800dc56:
    iVar3 = 0x102;
  }
  return iVar3;
LAB_ram_4800dc9e:
  (&DAT_ram_4ff483a0)[uVar2 * 3] = (&DAT_ram_4ff483a0)[uVar2 * 3] | 1;
  puVar4[2] = (char)uVar2;
  puVar4[1] = (char)aiStack_34[0];
  uVar2 = uVar2 + 1;
  puVar4 = puVar4 + 3;
  if (param_4 == uVar2) goto LAB_ram_4800dd3e;
  goto LAB_ram_4800dcba;
}


