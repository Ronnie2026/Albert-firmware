/* Firmware entry: 0x480c76a2 */

void FUN_ram_480c76a2(int *param_1,int *param_2,int param_3,int param_4)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  char cVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 uStack_58;
  int iStack_54;
  undefined1 auStack_50 [4];
  uint uStack_4c;
  char cStack_48;
  undefined1 auStack_47 [3];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar12 = (uint *)param_1[3];
  fence();
  uVar13 = *puVar12;
  do {
    uVar9 = uVar13 + 1;
    if ((int)uVar13 < 0) {
      return;
    }
    if ((uVar13 & 0xffff) == 0xffff) {
      return;
    }
    bVar1 = *puVar12 != uVar13;
    uVar13 = *puVar12;
  } while (bVar1);
  *puVar12 = uVar9;
  iVar8 = *param_1;
  FUN_ram_4ff3ec14(iVar8 + 0xb18,0xffffffff);
  cVar11 = *(char *)(iVar8 + 0xbc7);
  cVar3 = *(char *)(iVar8 + 0xb42);
  cVar4 = *(char *)(iVar8 + 0xb38);
  cVar5 = *(char *)(iVar8 + 0xb43);
  uVar6 = *(ushort *)(iVar8 + 0xbc8);
  uVar13 = (uint)*(ushort *)(iVar8 + 0xbca);
  FUN_ram_4ff3ee10(iVar8 + 0xb18);
  if (((cVar11 != '\0') && (cVar4 != '\0')) && (cVar3 != '\0')) {
    uVar9 = (uint)uVar6;
    if (10000 < uVar6) {
      uVar9 = 10000;
    }
    if (uVar13 < 1000) {
      uVar13 = 1000;
    }
    if (60000 < uVar13) {
      uVar13 = 60000;
    }
    if (((cVar5 != '\0') && (*(char *)((int)param_1 + 0x2ed) != '\0')) &&
       (((byte)((char)param_1[0xbb] - 1U) < 2 && ((uint)(param_3 - param_1[0xbc]) < 0x5dd)))) {
      if (*(char *)((int)param_1 + 0x2ee) == '\0') goto LAB_ram_480c7744;
      if ((uint)(param_3 - param_1[0xbd]) < uVar13 + uVar9) {
        if (((uVar9 <= (uint)(param_3 - param_1[0xbd])) && ((char)param_1[0xbe] != '\0')) &&
           ((1 < *(byte *)((int)param_1 + 0x2f9) &&
            (((((uint)(param_3 - param_1[0xbf]) < 0x65 && (*(char *)((int)param_2 + 0xd) == '\x01'))
              && (iStack_54 = *param_2, iStack_54 == 0x293)) &&
             (((char)param_2[1] == '\b' && (*(byte *)(param_2 + 2) >> 4 != 0xc)))))))) {
          auStack_50 = (undefined1  [4])param_2[1];
          bVar7 = (byte)((uint)param_2[2] >> 0x18);
          iStack_44 = param_2[4];
          iStack_40 = param_2[5];
          iStack_3c = param_2[6];
          iStack_38 = param_2[7];
          iStack_34 = param_2[8];
          uStack_4c._1_3_ = (undefined3)((uint)param_2[2] >> 8);
          uStack_4c = CONCAT13(bVar7 + 0x10 & 0xf0 | bVar7 & 0xf,
                               (int3)CONCAT31(uStack_4c._1_3_,*(byte *)(param_2 + 2))) & 0xffffff0f
                      | 0xc0;
          piVar10 = &iStack_54;
          cVar11 = -0x6b;
          do {
            pcVar2 = (char *)((int)piVar10 + 5);
            piVar10 = (int *)((int)piVar10 + 1);
            cVar11 = cVar11 + *pcVar2;
          } while ((int *)(auStack_50 + 3) != piVar10);
          auStack_47[1] = (char)((uint)param_2[3] >> 0x10);
          cVar3 = auStack_47[1];
          _cStack_48 = CONCAT31(SUB43((uint)param_2[3] >> 8,0),cVar11);
          iVar8 = iStack_44;
          if ((cVar3 == '\0') && (iStack_44 == 0)) {
            iVar8 = param_4;
          }
          uStack_58 = 0;
          FUN_ram_4805cb5e(*param_1,&iStack_54,0,1,2,1,iVar8 + 20000,1,&uStack_58,0,0,1,0,0);
          fence();
          uVar13 = *puVar12;
          while( true ) {
            uVar9 = uVar13 - 1;
            if ((int)uVar13 < 0) {
              return;
            }
            if ((uVar13 & 0xffff) == 0) break;
            bVar1 = *puVar12 == uVar13;
            uVar13 = *puVar12;
            if (bVar1) {
              *puVar12 = uVar9;
              return;
            }
          }
          return;
        }
        goto LAB_ram_480c7744;
      }
    }
  }
  *(undefined1 *)((int)param_1 + 0x2ee) = 0;
LAB_ram_480c7744:
  fence();
  uVar13 = *puVar12;
  while( true ) {
    uVar9 = uVar13 - 1;
    if ((int)uVar13 < 0) {
      return;
    }
    if ((uVar13 & 0xffff) == 0) break;
    bVar1 = *puVar12 == uVar13;
    uVar13 = *puVar12;
    if (bVar1) {
      *puVar12 = uVar9;
      return;
    }
  }
  return;
}


