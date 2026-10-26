/* Firmware entry: 0x48085fb4 */

undefined8 FUN_ram_48085fb4(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  char *pcVar11;
  undefined4 local_170;
  undefined4 auStack_16c [10];
  undefined2 uStack_144;
  undefined1 uStack_13b;
  undefined1 uStack_138;
  undefined2 uStack_132;
  undefined1 uStack_124;
  undefined1 auStack_80 [80];
  undefined4 auStack_30 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar8 = &local_170;
  puVar9 = &local_170;
  if (param_2 < 8) {
    if ((*(char *)(param_1 + 0x18) == '\0') || (*(char *)(param_1 + 0x19) == '\0')) {
      local_170 = (uint)local_170._3_1_ << 0x18;
      local_170 = CONCAT22(local_170._2_2_,0x1300);
    }
    else {
      pcVar11 = (char *)(*(int *)(param_1 + 0x14) + param_2 * 0x17c);
      if ((*pcVar11 != '\0') || (pcVar11[0x178] != '\0')) {
        pcVar11[0] = '\0';
        pcVar11[1] = '\0';
        memset(&local_170,0,0x140);
        do {
          *(undefined1 *)((int)puVar8 + 0x50) = 1;
          *(undefined2 *)((int)puVar8 + 0x7c) = 100;
          *(undefined1 *)((int)puVar8 + 0x85) = 1;
          *(undefined1 *)((int)puVar8 + 0x88) = 0xff;
          *(undefined2 *)((int)puVar8 + 0x8e) = 0xff1d;
          *(undefined1 *)((int)puVar8 + 0x9c) = 0xff;
          puVar8 = (undefined4 *)((int)puVar8 + 0x50);
        } while ((undefined4 *)auStack_80 != puVar8);
        memset(pcVar11 + 4,0,0x16c);
        uVar1 = local_170;
        local_170 = CONCAT31(local_170._1_3_,1);
        uStack_144 = 100;
        uStack_13b = 1;
        uStack_138 = 0xff;
        uStack_132 = 0xff1d;
        uStack_124 = 0xff;
        pcVar6 = pcVar11 + 0x2c;
        do {
          uVar2 = *puVar9;
          uVar3 = puVar9[1];
          uVar4 = puVar9[2];
          *(undefined4 *)(pcVar6 + 0xc) = puVar9[3];
          *(undefined4 *)pcVar6 = uVar2;
          *(undefined4 *)(pcVar6 + 4) = uVar3;
          *(undefined4 *)(pcVar6 + 8) = uVar4;
          puVar9 = puVar9 + 4;
          pcVar6 = pcVar6 + 0x10;
        } while (puVar9 != auStack_30);
        iVar10 = *(int *)(param_1 + 0x14) + param_2 * 0x17c;
        iVar7 = *(int *)(iVar10 + 0x170) + 1;
        if (iVar7 == 0) {
          iVar7 = 1;
        }
        *(int *)(iVar10 + 0x170) = iVar7;
        uVar5 = *(uint *)(param_1 + 0x1c);
        *(undefined1 *)(iVar10 + 0x178) = 2;
        *(uint *)(param_1 + 0x1c) = uVar5 | 1 << (param_2 & 0x1f);
        uVar2 = *(undefined4 *)(pcVar11 + 0x170);
        local_170._3_1_ = SUB41(uVar1,3);
        local_170 = CONCAT13(local_170._3_1_,0x10001);
        goto LAB_ram_48085fd0;
      }
      local_170 = (uint)local_170._3_1_ << 0x18;
      local_170 = CONCAT22(local_170._2_2_,0x1400);
    }
  }
  else {
    local_170 = (uint)local_170._3_1_ << 0x18;
    local_170 = CONCAT22(local_170._2_2_,0x1200);
  }
  uVar2 = 0;
LAB_ram_48085fd0:
  return CONCAT44(uVar2,local_170);
}


