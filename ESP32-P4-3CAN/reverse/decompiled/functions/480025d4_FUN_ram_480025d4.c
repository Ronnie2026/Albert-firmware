/* Firmware entry: 0x480025d4 */

undefined4 FUN_ram_480025d4(undefined1 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined1 *)0x0) {
    return 0x102;
  }
  if (param_2 == 0) {
    return 0x102;
  }
  if ((param_3 == 0) || (iVar13 = (int)DAT_ram_4ff6d9b0, param_3 <= param_2)) {
    return 0x102;
  }
  do {
    if (iVar13 == 0) {
      puVar12 = (undefined1 *)FUN_ram_4ff206d8(0x24,0x804);
      if (puVar12 == (undefined1 *)0x0) {
        uVar16 = 0x101;
      }
      else {
        uVar1 = param_1[8];
        uVar2 = *param_1;
        uVar3 = param_1[1];
        uVar4 = param_1[2];
        uVar5 = param_1[3];
        uVar6 = param_1[4];
        uVar7 = param_1[5];
        uVar8 = param_1[6];
        uVar9 = param_1[9];
        uVar10 = param_1[10];
        uVar11 = param_1[0xb];
        puVar12[7] = param_1[7];
        puVar12[8] = uVar1;
        *(undefined4 *)(puVar12 + 0x14) = 0xb33fffff;
        *puVar12 = uVar2;
        puVar12[1] = uVar3;
        puVar12[2] = uVar4;
        puVar12[3] = uVar5;
        puVar12[4] = uVar6;
        puVar12[5] = uVar7;
        puVar12[6] = uVar8;
        puVar12[9] = uVar9;
        puVar12[10] = uVar10;
        puVar12[0xb] = uVar11;
        *(int *)(puVar12 + 0xc) = param_2;
        *(int *)(puVar12 + 0x10) = param_3;
        *(undefined4 *)(puVar12 + 0x18) = 0;
        iVar13 = FUN_ram_481a9622(param_2,param_3 - param_2);
        *(int *)(puVar12 + 0x1c) = iVar13;
        *(undefined4 *)(puVar12 + 0x20) = 0;
        if (iVar13 != 0) {
          FUN_ram_4ff43474(iVar13,puVar12 + 0x14);
          if (DAT_ram_4ff47dbc == '\0') {
            FUN_ram_481a976e(*(undefined4 *)(puVar12 + 0x1c),0);
          }
          FUN_ram_4ff3eb8c();
          FUN_ram_4ff3ec14(&DAT_ram_4ff47db4,0xffffffff);
          *(undefined1 **)(puVar12 + 0x20) = DAT_ram_4ff6d9b0;
          DAT_ram_4ff6d9b0 = puVar12;
          FUN_ram_4ff3eb8c();
          FUN_ram_4ff3ee10(&DAT_ram_4ff47db4);
          return 0;
        }
        uVar16 = 0x104;
      }
      thunk_FUN_ram_4ff209c6(puVar12);
      return uVar16;
    }
    iVar15 = *(int *)(iVar13 + 0xc);
    iVar14 = *(int *)(iVar13 + 0x10);
    if (param_2 < iVar15) {
      if ((iVar15 < param_3) || ((param_2 < iVar14 && (iVar14 < param_3)))) {
        return 0xffffffff;
      }
    }
    else {
      if ((param_2 < iVar14) && (iVar14 < param_3)) {
        return 0xffffffff;
      }
      if ((param_2 == iVar15) && (param_3 == iVar14)) {
        return 0xffffffff;
      }
    }
    iVar13 = *(int *)(iVar13 + 0x20);
  } while( true );
}


