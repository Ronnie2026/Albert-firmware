/* Firmware entry: 0x4805a08e */

uint FUN_ram_4805a08e(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  char cVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  char local_15c [96];
  undefined1 uStack_fc;
  undefined1 auStack_f8 [96];
  undefined1 uStack_98;
  undefined1 auStack_94 [96];
  undefined1 uStack_34;
  char acStack_30 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = param_1 + 0x2864;
  FUN_ram_4ff3ec14(iVar1,0xffffffff);
  piVar15 = *(int **)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar1);
  if (piVar15 != (int *)0x0) {
    iVar8 = (param_1 + 0x9788U & 3) << 3;
    uVar6 = 0xff << iVar8;
    local_15c[0] = '\0';
    puVar11 = (uint *)(param_1 + 0x9788U & 0xfffffffc);
    uVar4 = *puVar11;
    if ((uVar4 & uVar6) == 0) {
      *puVar11 = uVar4 & ~uVar6 | 1 << iVar8 & uVar6;
    }
    cVar10 = (char)((int)uVar4 >> iVar8);
    uVar4 = (uint)(cVar10 == '\0');
    if ((cVar10 == '\0') || (local_15c[0] = cVar10, uVar4 != 0)) {
      iVar8 = param_1 + 0xb30;
      FUN_ram_4ff3ec14(iVar8,0xffffffff);
      cVar10 = *(char *)(param_1 + 0x964c);
      puVar12 = (undefined4 *)(param_1 + 0x93f4);
      pcVar9 = local_15c;
      do {
        uVar13 = puVar12[1];
        uVar2 = puVar12[2];
        uVar5 = puVar12[3];
        uVar7 = puVar12[4];
        *(undefined4 *)pcVar9 = *puVar12;
        *(undefined4 *)(pcVar9 + 4) = uVar13;
        *(undefined4 *)(pcVar9 + 8) = uVar2;
        *(undefined4 *)(pcVar9 + 0xc) = uVar5;
        *(undefined4 *)(pcVar9 + 0x10) = uVar7;
        puVar12 = puVar12 + 5;
        pcVar9 = pcVar9 + 0x14;
      } while (puVar12 != (undefined4 *)(param_1 + 0x9520));
      FUN_ram_4ff3ee10(iVar8);
      if (param_2 == 0) {
        if (cVar10 != '\0') {
          uVar4 = FUN_ram_480597a8(param_1);
          uVar6 = (**(code **)(*piVar15 + 0x14))(piVar15,0);
          FUN_ram_4ff3ec14(iVar1,0xffffffff);
          piVar15 = *(int **)(param_1 + 0x1e08);
          uVar4 = uVar4 & uVar6 & 0xff;
          FUN_ram_4ff3ee10(iVar1);
          if (piVar15 != (int *)0x0) {
            (**(code **)(*piVar15 + 0xc))(piVar15,1,local_15c,uStack_fc);
            (**(code **)(*piVar15 + 0xc))(piVar15,2,auStack_f8,uStack_98);
            (**(code **)(*piVar15 + 0xc))(piVar15,4,auStack_94,uStack_34);
          }
          FUN_ram_4ff3ec14(iVar8,0xffffffff);
          *(undefined1 *)(param_1 + 0x964c) = 0;
          pcVar9 = local_15c;
          puVar12 = (undefined4 *)(param_1 + 0x9650);
          do {
            uVar13 = *(undefined4 *)pcVar9;
            uVar2 = *(undefined4 *)(pcVar9 + 4);
            uVar5 = *(undefined4 *)(pcVar9 + 8);
            uVar7 = *(undefined4 *)(pcVar9 + 0xc);
            puVar12[4] = *(undefined4 *)(pcVar9 + 0x10);
            *puVar12 = uVar13;
            puVar12[1] = uVar2;
            puVar12[2] = uVar5;
            puVar12[3] = uVar7;
            pcVar9 = pcVar9 + 0x14;
            puVar12 = puVar12 + 5;
          } while (pcVar9 != acStack_30);
          *(uint *)(param_1 + 0x9784) = uVar4 - 1;
          FUN_ram_4ff3ee10(iVar8);
        }
      }
      else if (cVar10 != '\x01') {
        FUN_ram_4ff3ec14(iVar1,0xffffffff);
        piVar14 = *(int **)(param_1 + 0x1e08);
        FUN_ram_4ff3ee10(iVar1);
        if (piVar14 != (int *)0x0) {
          (**(code **)(*piVar14 + 0xc))(piVar14,1,local_15c,uStack_fc);
          (**(code **)(*piVar14 + 0xc))(piVar14,2,auStack_f8,uStack_98);
          (**(code **)(*piVar14 + 0xc))(piVar14,4,auStack_94,uStack_34);
        }
        iVar3 = (**(code **)(*piVar15 + 0x14))(piVar15,1);
        if (iVar3 == 0) {
          (**(code **)(*piVar15 + 0x14))(piVar15,0);
          FUN_ram_480597a8(param_1);
          FUN_ram_4ff3ec14(iVar1,0xffffffff);
          piVar15 = *(int **)(param_1 + 0x1e08);
          FUN_ram_4ff3ee10(iVar1);
          if (piVar15 != (int *)0x0) {
            (**(code **)(*piVar15 + 0xc))(piVar15,1,local_15c,uStack_fc);
            (**(code **)(*piVar15 + 0xc))(piVar15,2,auStack_f8,uStack_98);
            (**(code **)(*piVar15 + 0xc))(piVar15,4,auStack_94,uStack_34);
          }
          FUN_ram_4ff3ec14(iVar8,0xffffffff);
          *(undefined1 *)(param_1 + 0x964c) = 0;
          pcVar9 = local_15c;
          puVar12 = (undefined4 *)(param_1 + 0x9650);
          do {
            uVar13 = *(undefined4 *)pcVar9;
            uVar2 = *(undefined4 *)(pcVar9 + 4);
            uVar5 = *(undefined4 *)(pcVar9 + 8);
            uVar7 = *(undefined4 *)(pcVar9 + 0xc);
            puVar12[4] = *(undefined4 *)(pcVar9 + 0x10);
            *puVar12 = uVar13;
            puVar12[1] = uVar2;
            puVar12[2] = uVar5;
            puVar12[3] = uVar7;
            pcVar9 = pcVar9 + 0x14;
            puVar12 = puVar12 + 5;
          } while (pcVar9 != acStack_30);
          *(undefined4 *)(param_1 + 0x9784) = 0xffffffff;
          FUN_ram_4ff3ee10(iVar8);
          uVar4 = 0;
        }
        else {
          FUN_ram_4ff3ec14(iVar8,0xffffffff);
          *(undefined1 *)(param_1 + 0x964c) = 1;
          pcVar9 = local_15c;
          puVar12 = (undefined4 *)(param_1 + 0x9650);
          do {
            uVar13 = *(undefined4 *)pcVar9;
            uVar2 = *(undefined4 *)(pcVar9 + 4);
            uVar5 = *(undefined4 *)(pcVar9 + 8);
            uVar7 = *(undefined4 *)(pcVar9 + 0xc);
            puVar12[4] = *(undefined4 *)(pcVar9 + 0x10);
            *puVar12 = uVar13;
            puVar12[1] = uVar2;
            puVar12[2] = uVar5;
            puVar12[3] = uVar7;
            pcVar9 = pcVar9 + 0x14;
            puVar12 = puVar12 + 5;
          } while (pcVar9 != acStack_30);
          *(undefined4 *)(param_1 + 0x9784) = 0;
          FUN_ram_4ff3ee10(iVar8);
        }
      }
      FUN_ram_48059f34(param_1);
      return uVar4;
    }
  }
  return 0;
}


