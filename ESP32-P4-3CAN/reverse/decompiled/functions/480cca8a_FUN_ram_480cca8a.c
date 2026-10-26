/* Firmware entry: 0x480cca8a */

void FUN_ram_480cca8a(int param_1,int *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  byte bVar12;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  undefined4 uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  char local_164 [4];
  undefined4 auStack_160 [16];
  char cStack_120;
  undefined4 uStack_68;
  undefined1 uStack_54;
  char acStack_34 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = FUN_ram_4805c396(*(undefined4 *)(param_1 + 0x58),5,2,0xf);
  uVar6 = FUN_ram_4805c396(*(undefined4 *)(param_1 + 0x58),6,2,9);
  iVar15 = param_1 + 0x574;
  FUN_ram_4ff3ec14(iVar15,0xffffffff);
  *(undefined1 *)(param_1 + 0x638) = uVar6;
  *(undefined1 *)(param_1 + 0x637) = uVar5;
  FUN_ram_4ff3ee10(iVar15);
  FUN_ram_48054a82(iVar15,param_2,param_3);
  FUN_ram_480cc884(param_1,param_3);
  if (*(char *)((int)param_2 + 0xd) != '\x02') {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  iStack_188 = *param_2;
  if (iStack_188 != 0x3c2) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  if (*(int *)(param_1 + 0x7a0) != 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  if (*(int *)(param_1 + 0x728) != 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  iVar16 = *(int *)(param_1 + 0x58);
  iStack_180 = param_2[2];
  uStack_184 = param_2[1];
  uStack_17c = param_2[3];
  iStack_178 = param_2[4];
  iStack_174 = param_2[5];
  iStack_170 = param_2[6];
  iStack_16c = param_2[7];
  iStack_168 = param_2[8];
  FUN_ram_4ff3ec14(iVar16 + 0xb18,0xffffffff);
  cVar1 = *(char *)(iVar16 + 0xb42);
  cVar2 = *(char *)(iVar16 + 0xb44);
  FUN_ram_4ff3ee10(iVar16 + 0xb18);
  uVar5 = 0;
  if ((cVar1 != '\0') && (uVar5 = 0, cVar2 != '\0')) {
    uVar5 = FUN_ram_48045922(*(undefined4 *)(param_1 + 0x5c),2,0);
  }
  FUN_ram_4ff3ec14(iVar15,0xffffffff);
  iVar16 = *param_2;
  *(undefined1 *)(param_1 + 0x584) = uVar5;
  if ((((iVar16 == 0x3c2) && (*(char *)((int)param_2 + 0xd) == '\x02')) &&
      ((char)param_2[1] == '\b')) && (bVar3 = *(byte *)((int)param_2 + 5), (bVar3 & 3) == 0)) {
    iVar16 = param_3;
    if (*(char *)(param_1 + 0x6bc) == '\x01') {
      if (*(char *)(param_1 + 0x6c8) != '\0') goto LAB_ram_480ccc06;
      *(undefined1 *)(param_1 + 0x6bc) = 2;
      *(int *)(param_1 + 0x6d0) = param_3 + 0x9c4;
      *(int *)(param_1 + 0x6fc) = *(int *)(param_1 + 0x6fc) + 1;
      *(undefined1 *)(param_1 + 0x6c9) = *(undefined1 *)(param_1 + 0x6ca);
      if (param_3 == 0) {
        iVar16 = 1;
      }
LAB_ram_480cced0:
      *(int *)(param_1 + 0x6c0) = iVar16;
      FUN_ram_4ff3ee10(iVar15);
      goto LAB_ram_480ccd6e;
    }
    if (*(char *)(param_1 + 0x6bc) == '\x03') {
      if (*(char *)(param_1 + 0x6c8) == '\0') {
        *(undefined1 *)(param_1 + 0x6bc) = 0;
        *(undefined4 *)(param_1 + 0x6c0) = 0;
        *(undefined1 *)(param_1 + 0x6c9) = 0;
        *(undefined2 *)(param_1 + 0x6ca) = 0;
        *(undefined1 *)(param_1 + 0x6cc) = 0;
        *(undefined4 *)(param_1 + 0x6d0) = 0;
        *(int *)(param_1 + 0x700) = *(int *)(param_1 + 0x700) + 1;
        *(int *)(param_1 + 0x71c) = *(int *)(param_1 + 0x71c) + 1;
        FUN_ram_4ff3ee10(iVar15);
        goto LAB_ram_480ccd6e;
      }
LAB_ram_480ccc06:
      if ((bVar3 & 8) != 0) {
        if (*(char *)(param_1 + 0x6cd) == '\0') {
          *(int *)(param_1 + 0x710) = *(int *)(param_1 + 0x710) + 1;
        }
        *(undefined1 *)(param_1 + 0x6bc) = 4;
        *(undefined4 *)(param_1 + 0x6c8) = 0;
        *(undefined1 *)(param_1 + 0x6cd) = 1;
        if (param_3 == 0) {
          iVar16 = 1;
        }
        goto LAB_ram_480cced0;
      }
      bVar12 = uStack_184._1_1_ | 8;
      uStack_184 = uStack_184 | 0x800;
      if (bVar3 != bVar12) {
        *(undefined1 *)(param_1 + 0x6ce) = 1;
        FUN_ram_4ff3ee10(iVar15);
        piVar14 = *(int **)(param_1 + 0x5c);
        piVar4 = piVar14 + 0x297;
        FUN_ram_4ff3ec14(piVar4,0xffffffff);
        piVar14 = (int *)*piVar14;
        FUN_ram_4ff3ee10(piVar4);
        memset(local_164,0,0x134);
        uStack_54 = 1;
        uStack_68 = 0xffffffff;
        if (((piVar14 != (int *)0x0) &&
            (iVar16 = (**(code **)(*piVar14 + 0x15c))(piVar14,2,local_164), iVar16 != 0)) &&
           (local_164[0] != '\0')) {
          if (*(char *)(param_1 + 0x7c9) == '\0') {
            pcVar13 = local_164;
            puVar11 = (undefined4 *)(param_1 + 2000);
            do {
              uVar7 = *(undefined4 *)(pcVar13 + 4);
              uVar9 = *(undefined4 *)(pcVar13 + 8);
              uVar10 = *(undefined4 *)(pcVar13 + 0xc);
              *puVar11 = *(undefined4 *)pcVar13;
              puVar11[1] = uVar7;
              puVar11[2] = uVar9;
              puVar11[3] = uVar10;
              pcVar13 = pcVar13 + 0x10;
              puVar11 = puVar11 + 4;
            } while (pcVar13 != acStack_34);
            *puVar11 = *(undefined4 *)pcVar13;
            *(undefined1 *)(param_1 + 0x7c9) = 1;
          }
          *(int *)(param_1 + 0x7cc) = param_3 + 500;
        }
        uStack_18c = 0;
        iVar8 = FUN_ram_48025b94();
        iVar16 = iStack_178;
        if ((uStack_17c._2_1_ == '\0') && (iStack_178 == 0)) {
          iVar16 = iVar8;
        }
        FUN_ram_48053f2a(local_164,iVar15,param_3);
        iVar16 = FUN_ram_4805cb5e(*(undefined4 *)(param_1 + 0x58),&iStack_188,0,0xc,1,1,
                                  iVar16 + 5000,8,&uStack_18c,0x40,(uint)(cStack_120 == '\x03') << 6
                                  ,1,0,0);
        if (iVar16 != 0) {
          *(int *)(param_1 + 0x72c) = iStack_188;
          *(uint *)(param_1 + 0x730) = uStack_184;
          *(int *)(param_1 + 0x734) = iStack_180;
          *(int *)(param_1 + 0x738) = uStack_17c;
          *(int *)(param_1 + 0x73c) = iStack_178;
          *(int *)(param_1 + 0x740) = iStack_174;
          *(int *)(param_1 + 0x744) = iStack_170;
          *(int *)(param_1 + 0x748) = iStack_16c;
          *(int *)(param_1 + 0x74c) = iStack_168;
          *(undefined4 *)(param_1 + 0x728) = uStack_18c;
          return;
        }
        FUN_ram_4ff3ec14(iVar15,0xffffffff);
        if (*(char *)(param_1 + 0x6ce) != '\0') {
          cVar1 = *(char *)(param_1 + 0x718);
          *(undefined1 *)(param_1 + 0x6ce) = 0;
          *(int *)(param_1 + 0x6f0) = *(int *)(param_1 + 0x6f0) + 1;
          *(char *)(param_1 + 0x718) = cVar1 + '\x01';
          if (3 < (byte)(cVar1 + 1U)) {
            *(undefined1 *)(param_1 + 0x6c8) = 0;
            iVar16 = param_3;
            if (param_3 == 0) {
              iVar16 = 1;
            }
            if (((*(char *)(param_1 + 0x6c9) == '\0') && (*(char *)(param_1 + 0x6ca) == '\0')) &&
               (*(char *)(param_1 + 0x6bc) != '\x03')) {
              *(int *)(param_1 + 0x6c0) = iVar16;
              *(undefined1 *)(param_1 + 0x6bc) = 6;
            }
            else if (*(byte *)(param_1 + 0x6cc) < 3) {
              if ((*(int *)(param_1 + 0x6d4) == 0) || (600 < param_3 - *(int *)(param_1 + 0x6d4))) {
                *(int *)(param_1 + 0x6c0) = iVar16;
                *(undefined1 *)(param_1 + 0x6cb) = 1;
                *(undefined1 *)(param_1 + 0x6bc) = 6;
              }
              else {
                *(byte *)(param_1 + 0x6cc) = *(byte *)(param_1 + 0x6cc) + 1;
                *(undefined1 *)(param_1 + 0x6cb) = 0;
                *(undefined1 *)(param_1 + 0x718) = 0;
                *(int *)(param_1 + 0x6c0) = iVar16;
                *(int *)(param_1 + 0x714) = *(int *)(param_1 + 0x714) + 1;
                *(undefined1 *)(param_1 + 0x6c8) = 4;
                *(undefined1 *)(param_1 + 0x6bc) = 3;
              }
            }
            else {
              *(undefined1 *)(param_1 + 0x6cb) = 0;
              *(int *)(param_1 + 0x6c0) = iVar16;
              *(int *)(param_1 + 0x720) = *(int *)(param_1 + 0x720) + 1;
              *(undefined1 *)(param_1 + 0x6bc) = 6;
            }
          }
        }
        FUN_ram_4ff3ee10(iVar15);
        return;
      }
    }
  }
  FUN_ram_4ff3ee10(iVar15);
LAB_ram_480ccd6e:
  FUN_ram_480cc884(param_1,param_3);
  return;
}


