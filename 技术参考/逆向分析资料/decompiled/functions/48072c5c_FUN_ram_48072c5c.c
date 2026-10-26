/* Firmware entry: 0x48072c5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_48072c5c(byte *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_530 [96];
  undefined1 auStack_3af [259];
  undefined4 uStack_2ac;
  undefined2 uStack_2a8;
  byte bStack_2a6;
  undefined1 auStack_2a4 [660];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar11 = local_530;
  if (((param_1 != (byte *)0x0) && (param_2 == 0x291)) && (*(int *)param_1 == 0x31444c43)) {
    uVar10 = 0xffffffff;
    pbVar4 = param_1;
    do {
      cVar9 = '\b';
      uVar10 = uVar10 ^ *pbVar4;
      do {
        cVar9 = cVar9 + -1;
        uVar10 = uVar10 >> 1 ^ -(uVar10 & 1) & 0xedb88320;
      } while (cVar9 != '\0');
      pbVar4 = pbVar4 + 1;
    } while (param_1 + 0x28d != pbVar4);
    if ((*(uint *)(param_1 + 0x28d) == ~uVar10) && (bVar1 = param_1[10], bVar1 < 2)) {
      puVar12 = &DAT_ram_482230e4;
      do {
        uVar3 = puVar12[1];
        uVar14 = puVar12[2];
        uVar13 = puVar12[3];
        uVar5 = puVar12[4];
        uVar8 = puVar12[5];
        *puVar11 = *puVar12;
        puVar11[1] = uVar3;
        puVar11[2] = uVar14;
        puVar11[3] = uVar13;
        puVar11[4] = uVar5;
        puVar11[5] = uVar8;
        puVar12 = puVar12 + 6;
        puVar11 = puVar11 + 6;
      } while (puVar12 != (undefined4 *)&DAT_ram_4822336c);
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar2 = *(undefined2 *)(param_1 + 8);
      *puVar11 = _DAT_ram_4822336c;
      bStack_2a6 = bVar1 & 1;
      uStack_2ac = uVar3;
      uStack_2a8 = uVar2;
      FUN_ram_4ff45158(local_530,param_1 + 0xb,0x181);
      FUN_ram_4ff45158(auStack_3af,param_1 + 0x18c,0x101);
      iVar6 = FUN_ram_48072aac(local_530,auStack_2a4);
      if ((iVar6 != 0) && (iVar7 = FUN_ram_4ff4511a(param_1,auStack_2a4,0x291), iVar7 == 0)) {
        FUN_ram_4ff45158(param_3,local_530,0x28b);
        return iVar6;
      }
    }
  }
  return 0;
}


