/* Firmware entry: 0x480588a2 */

undefined1 *
FUN_ram_480588a2(undefined1 *param_1,int param_2,undefined4 *param_3,int *param_4,int param_5,
                undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  char cStack_fd;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  byte abStack_f4 [4];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  byte bStack_cc;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char cStack_a8;
  undefined4 local_a4;
  undefined4 auStack_a0 [30];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_2 + 0x2864,0xffffffff);
  *(int **)(param_2 + 0x1e08) = param_4;
  FUN_ram_4ff3ee10(param_2 + 0x2864);
  FUN_ram_4ff3ec14(param_2 + 0x8200,0xffffffff);
  puVar2 = (undefined4 *)(param_2 + 0x8208);
  puVar12 = &local_a4;
  do {
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    *puVar12 = *puVar2;
    puVar12[1] = uVar7;
    puVar12[2] = uVar8;
    puVar12[3] = uVar9;
    puVar2 = puVar2 + 4;
    puVar12 = puVar12 + 4;
  } while (puVar2 != (undefined4 *)(param_2 + 0x8278));
  *puVar12 = *puVar2;
  FUN_ram_4ff3ee10(param_2 + 0x8200);
  bVar4 = (**(code **)(*param_4 + 0x54))(param_4);
  local_a4._2_1_ = bVar4 & local_a4._2_1_;
  uVar9 = (**(code **)(*param_4 + 0x154))(param_4,2);
  uVar7 = FUN_ram_48025b94();
  FUN_ram_4804132a(abStack_f4,param_3,param_5,param_6,&local_a4,uVar9,uVar7,param_7);
  memset(param_1,0,0x88);
  uVar14 = param_3[3];
  uVar13 = param_3[4];
  uVar8 = param_3[5];
  uVar11 = param_3[6];
  uVar10 = param_3[7];
  uVar5 = param_3[8];
  uVar7 = *param_3;
  uVar15 = param_3[1];
  *(undefined4 *)(param_1 + 0xc) = param_3[2];
  *(undefined4 *)(param_1 + 0x10) = uVar14;
  *(undefined4 *)(param_1 + 0x14) = uVar13;
  *(undefined4 *)(param_1 + 0x18) = uVar8;
  *(undefined4 *)(param_1 + 0x1c) = uVar11;
  *(undefined4 *)(param_1 + 0x20) = uVar10;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 0x50) = uStack_c0;
  *(undefined4 *)(param_1 + 0x58) = uStack_b4;
  *(undefined4 *)(param_1 + 0x5c) = uStack_b0;
  *(undefined4 *)(param_1 + 0x60) = uStack_ac;
  *(int *)(param_1 + 100) = param_5;
  *(undefined4 *)(param_1 + 0x4c) = param_6;
  *(undefined4 *)(param_1 + 0x78) = uVar9;
  *(undefined4 *)(param_1 + 0x7c) = param_7;
  *(undefined4 *)(param_1 + 4) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar15;
  *(undefined4 *)(param_1 + 0x54) = uStack_b8;
  param_1[0x82] = uStack_bc;
  param_1[0x80] = cStack_a8;
  *(undefined4 *)(param_1 + 0x28) = uStack_f0;
  *(undefined4 *)(param_1 + 0x2c) = uStack_ec;
  *(undefined4 *)(param_1 + 0x30) = uStack_e8;
  *(undefined4 *)(param_1 + 0x34) = uStack_e4;
  *(undefined4 *)(param_1 + 0x38) = uStack_e0;
  *(undefined4 *)(param_1 + 0x3c) = uStack_dc;
  *(undefined4 *)(param_1 + 0x40) = uStack_d8;
  *(undefined4 *)(param_1 + 0x44) = uStack_d4;
  *(undefined4 *)(param_1 + 0x48) = uStack_d0;
  if (abStack_f4[0] == 4) {
    *param_1 = 5;
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return param_1;
  }
  if (abStack_f4[0] < 5) {
    if (abStack_f4[0] == 2) {
      *param_1 = 3;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return param_1;
    }
    if (abStack_f4[0] == 3) {
      *param_1 = 4;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return param_1;
    }
    if (abStack_f4[0] == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return param_1;
    }
  }
  else {
    if (abStack_f4[0] == 5) {
      *param_1 = 6;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return param_1;
    }
    if (abStack_f4[0] == 6) {
      *param_1 = 8;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return param_1;
    }
  }
  uVar7 = 5;
  if ((cStack_a8 != '\x01') && (uVar7 = 4, cStack_a8 != '\x02')) {
    uVar7 = 8;
  }
  uStack_fc = 0;
  cStack_fd = '\b';
  uVar8 = FUN_ram_48025b94();
  uStack_130 = *(undefined4 *)(param_1 + 0x28);
  uStack_128 = *(undefined4 *)(param_1 + 0x30);
  uStack_124 = *(undefined4 *)(param_1 + 0x34);
  uStack_120 = *(undefined4 *)(param_1 + 0x38);
  uStack_12c = *(undefined4 *)(param_1 + 0x2c);
  uStack_11c = *(undefined4 *)(param_1 + 0x3c);
  uStack_118 = *(undefined4 *)(param_1 + 0x40);
  uStack_114 = *(undefined4 *)(param_1 + 0x44);
  uStack_110 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x6c) = uVar8;
  param_1[0x85] = 1;
  uStack_f8 = 0;
  iVar6 = FUN_ram_48046098(param_2 + 0x1e08,&uStack_130,bStack_cc - 3 < 2,(uint)bStack_cc,uVar7,4,
                           auStack_a0[2],&uStack_fc,&cStack_fd,param_5 + 5000,1,0,&uStack_f8);
  cVar1 = cStack_fd;
  param_1[0x83] = (char)iVar6;
  if (iVar6 == 0) {
    uVar7 = FUN_ram_48025b94();
    *(undefined4 *)(param_1 + 0x70) = uVar7;
    uVar3 = 8;
    if ((2 < (byte)(cVar1 - 3U)) && (uVar3 = 8, cVar1 != '\a')) {
      uVar3 = 2;
    }
  }
  else {
    param_1[0x84] = 1;
    *(undefined4 *)(param_1 + 0x70) = uStack_f8;
    *(undefined4 *)(param_1 + 0x74) = uStack_fc;
    uVar3 = 1;
  }
  param_1[0x81] = cVar1;
  *param_1 = uVar3;
  return param_1;
}


