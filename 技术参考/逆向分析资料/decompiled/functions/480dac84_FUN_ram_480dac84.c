/* Firmware entry: 0x480dac84 */

char FUN_ram_480dac84(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint uStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  uint uStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  byte bStack_b8;
  undefined1 uStack_a8;
  uint local_a4 [9];
  undefined2 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_a4[0] = 0;
  local_a4[2] = 0;
  local_a4[3] = 0;
  local_a4[4] = 0;
  local_a4[5] = 0;
  local_a4[7] = 0;
  local_a4[8] = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  local_a4[1] = 8;
  local_a4[6] = 0x10000;
  FUN_ram_4ff45158(param_3,local_a4,0x3e);
  if ((((param_1[0x146] == 0) && (cVar1 = (char)param_1[0x112], cVar1 != '\0')) &&
      (iVar9 = param_1[0x143], iVar9 != 0)) &&
     ((iVar9 != param_1[0x144] && (iVar10 = param_1[0x141], (uint)(param_2 - iVar10) < 0x1389)))) {
    iStack_100 = param_1[0x10f];
    iStack_fc = param_1[0x110];
    iStack_f8 = param_1[0x111];
    uStack_118 = param_1[0x109];
    iStack_114 = param_1[0x10a];
    iStack_110 = param_1[0x10b];
    iStack_108 = param_1[0x10d];
    iStack_10c = param_1[0x10c];
    iStack_104 = param_1[0x10e];
    iVar11 = param_1[0x142];
    iVar12 = param_1[0x145];
    uStack_f4 = uStack_118;
    iStack_f0 = iStack_114;
    iStack_ec = iStack_110;
    iStack_e8 = iStack_10c;
    iStack_e4 = iStack_108;
    iStack_e0 = iStack_104;
    iStack_dc = iStack_100;
    iStack_d8 = iStack_fc;
    iStack_d4 = iStack_f8;
    local_a4[0] = uStack_118;
    local_a4[1] = iStack_114;
    local_a4[2] = iStack_110;
    local_a4[3] = iStack_10c;
    local_a4[4] = iStack_108;
    local_a4[5] = iStack_104;
    local_a4[6] = iStack_100;
    local_a4[7] = iStack_fc;
    local_a4[8] = iStack_f8;
    FUN_ram_480c3830(param_1);
    FUN_ram_4ff3ec14(param_1 + 0x14c,0xffffffff);
    puVar7 = (uint *)(param_1 + 0x14e);
    puVar6 = local_a4;
    do {
      uVar2 = puVar7[1];
      uVar4 = puVar7[2];
      *puVar6 = *puVar7;
      uVar5 = puVar7[3];
      puVar6[1] = uVar2;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
      puVar7 = puVar7 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar7 != (uint *)(param_1 + 0x16a));
    *puVar6 = *puVar7;
    FUN_ram_4ff3ee10(param_1 + 0x14c);
    puVar15 = (undefined4 *)param_1[1];
    puVar13 = puVar15 + 0x297;
    FUN_ram_4ff3ec14(puVar13,0xffffffff);
    piVar14 = (int *)*puVar15;
    FUN_ram_4ff3ee10(puVar13);
    uVar3 = 0;
    if (piVar14 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar14 + 0x154))(piVar14,2);
    }
    FUN_ram_4804132a(&uStack_f4,&uStack_118,iVar10,iVar9,local_a4,uVar3,param_2,
                     *(undefined4 *)(*param_1 + 0x92c));
    if ((uStack_f4 & 0xff) == 1) {
      param_3[0xe] = iVar10 + 5000;
      *(byte *)((int)param_3 + 0x25) = bStack_b8;
      param_3[10] = iVar9;
      param_3[0xb] = iVar12;
      param_3[0xc] = iVar10;
      param_3[0xd] = iVar11;
      *param_3 = iStack_f0;
      param_3[1] = iStack_ec;
      param_3[2] = iStack_e8;
      param_3[3] = iStack_e4;
      param_3[4] = iStack_e0;
      param_3[5] = iStack_dc;
      param_3[6] = iStack_d8;
      param_3[7] = iStack_d4;
      param_3[8] = iStack_d0;
      *(undefined1 *)(param_3 + 9) = uStack_a8;
      cVar8 = '\0';
      if ((((bStack_b8 & 4) != 0) && (cVar8 = cVar1, (char)param_1[0x1d9] != '\x02')) &&
         (cVar8 = '\0', (char)param_1[0x1d9] == '\x01')) {
        cVar8 = (char)param_1[0x1de] == '\x02';
      }
      *(char *)(param_3 + 0xf) = cVar8;
      *(undefined1 *)((int)param_3 + 0x3d) = 1;
      return cVar1;
    }
  }
  return '\0';
}


