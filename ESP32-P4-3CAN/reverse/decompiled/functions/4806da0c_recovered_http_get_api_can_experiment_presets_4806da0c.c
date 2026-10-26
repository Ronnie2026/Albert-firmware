/* Firmware entry: 0x4806da0c */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_api_can_experiment_presets_4806da0c(void)

{
  ushort uVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  byte bVar11;
  undefined4 uVar12;
  int iVar13;
  char cVar14;
  undefined4 uStack_18c;
  undefined4 *****pppppuStack_188;
  uint uStack_184;
  undefined4 *****apppppuStack_180 [2];
  uint uStack_178;
  byte bStack_171;
  int iStack_170;
  undefined1 *puStack_16c;
  undefined1 auStack_160 [3];
  byte local_15d [297];
  
  iVar5 = DAT_ram_4ff6ded4;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(auStack_160,0,0x120);
  if (*(char *)(iVar5 + 0x18) != '\0') {
    iVar5 = *(int *)(iVar5 + 0x14);
    pbVar3 = local_15d;
    if (iVar5 != 0) {
      iVar4 = iVar5 + 0xc;
      do {
        uVar1 = *(ushort *)(iVar4 + -0xc);
        cVar14 = *(char *)(iVar4 + 0x16c);
        uVar12 = *(undefined4 *)(iVar4 + 0x164);
        uVar9 = *(undefined4 *)(iVar4 + 0x168);
        *(ushort *)(pbVar3 + -3) = uVar1;
        pbVar3[-1] = cVar14 != '\0';
        *(undefined4 *)(pbVar3 + 0x19) = uVar12;
        *(undefined4 *)(pbVar3 + 0x1d) = uVar9;
        if ((uVar1 >> 8 & 1) != 0) {
          pbVar3 = (byte *)FUN_ram_4ff45158(pbVar3,iVar4,0x19);
          pbVar3[0x18] = 0;
        }
        iVar4 = iVar4 + 0x17c;
        pbVar3 = pbVar3 + 0x24;
      } while (iVar4 != iVar5 + 0xbec);
    }
  }
  pbVar3 = local_15d;
  FUN_ram_4802a8a8(apppppuStack_180,"{\"ok\":true,\"slots\":[");
  FUN_ram_4802af5a(apppppuStack_180,0x7b);
  cVar14 = '\0';
  if ((char)bStack_171 < '\0') goto LAB_ram_4806dddc;
LAB_ram_4806daa2:
  if ((undefined4 ******)apppppuStack_180[0] == (undefined4 ******)0x0) goto LAB_ram_4806dabe;
  uVar8 = uStack_178;
  if (uStack_178 == 0) goto LAB_ram_4806dabe;
  do {
    pbVar6 = (byte *)FUN_ram_4802b206(apppppuStack_180,uVar8 - 1);
    if ((*pbVar6 & 0xdf) == 0x5b) goto LAB_ram_4806dac8;
LAB_ram_4806dabe:
    do {
      FUN_ram_4802af5a(apppppuStack_180,0x2c);
LAB_ram_4806dac8:
      FUN_ram_4802af5a(apppppuStack_180,0x22);
      FUN_ram_4802af2c(apppppuStack_180,&DAT_ram_481c7a3c);
      FUN_ram_4802af2c(apppppuStack_180,&DAT_ram_481c67c4);
      FUN_ram_4802a928(&iStack_170,cVar14,10);
      FUN_ram_4802ae48(apppppuStack_180,&iStack_170);
      FUN_ram_4802a59e(&iStack_170);
      bVar11 = pbVar3[-3];
      if ((char)bStack_171 < '\0') {
        uVar8 = bStack_171 & 0x7f;
        if ((bStack_171 & 0x7f) != 0) goto LAB_ram_4806db12;
LAB_ram_4806db26:
        FUN_ram_4802af5a(apppppuStack_180,0x2c);
      }
      else {
        if (((undefined4 ******)apppppuStack_180[0] == (undefined4 ******)0x0) ||
           (uVar8 = uStack_178, uStack_178 == 0)) goto LAB_ram_4806db26;
LAB_ram_4806db12:
        pbVar6 = (byte *)FUN_ram_4802b206(apppppuStack_180,uVar8 - 1);
        if ((*pbVar6 & 0xdf) != 0x5b) goto LAB_ram_4806db26;
      }
      FUN_ram_4802af5a(apppppuStack_180,0x22);
      FUN_ram_4802af2c(apppppuStack_180,"occupied");
      FUN_ram_4802af2c(apppppuStack_180,&DAT_ram_481c67c4);
      if (bVar11 == 0) {
        FUN_ram_4802af2c(apppppuStack_180,"false");
        bVar11 = pbVar3[-2];
        if ((char)bStack_171 < '\0') goto LAB_ram_4806de28;
LAB_ram_4806db6c:
        if (((undefined4 ******)apppppuStack_180[0] == (undefined4 ******)0x0) ||
           (uVar8 = uStack_178, uStack_178 == 0)) goto LAB_ram_4806db88;
LAB_ram_4806db74:
        pbVar6 = (byte *)FUN_ram_4802b206(apppppuStack_180,uVar8 - 1);
        if ((*pbVar6 & 0xdf) != 0x5b) goto LAB_ram_4806db88;
      }
      else {
        FUN_ram_4802af2c(apppppuStack_180,&DAT_ram_481c3dec);
        bVar11 = pbVar3[-2];
        if (-1 < (char)bStack_171) goto LAB_ram_4806db6c;
LAB_ram_4806de28:
        uVar8 = bStack_171 & 0x7f;
        if ((bStack_171 & 0x7f) != 0) goto LAB_ram_4806db74;
LAB_ram_4806db88:
        FUN_ram_4802af5a(apppppuStack_180,0x2c);
      }
      FUN_ram_4802af5a(apppppuStack_180,0x22);
      FUN_ram_4802af2c(apppppuStack_180,"valid");
      FUN_ram_4802af2c(apppppuStack_180,&DAT_ram_481c67c4);
      if (bVar11 == 0) {
        FUN_ram_4802af2c(apppppuStack_180,"false");
        bVar11 = pbVar3[-1];
        if ((char)bStack_171 < '\0') goto LAB_ram_4806de50;
LAB_ram_4806dbce:
        if (((undefined4 ******)apppppuStack_180[0] == (undefined4 ******)0x0) ||
           (uVar8 = uStack_178, uStack_178 == 0)) goto LAB_ram_4806dbea;
LAB_ram_4806dbd6:
        pbVar6 = (byte *)FUN_ram_4802b206(apppppuStack_180,uVar8 - 1);
        if ((*pbVar6 & 0xdf) != 0x5b) goto LAB_ram_4806dbea;
      }
      else {
        FUN_ram_4802af2c(apppppuStack_180,&DAT_ram_481c3dec);
        bVar11 = pbVar3[-1];
        if (-1 < (char)bStack_171) goto LAB_ram_4806dbce;
LAB_ram_4806de50:
        uVar8 = bStack_171 & 0x7f;
        if ((bStack_171 & 0x7f) != 0) goto LAB_ram_4806dbd6;
LAB_ram_4806dbea:
        FUN_ram_4802af5a(apppppuStack_180,0x2c);
      }
      FUN_ram_4802af5a(apppppuStack_180,0x22);
      FUN_ram_4802af2c(apppppuStack_180,"persistencePending");
      FUN_ram_4802af2c(apppppuStack_180,&DAT_ram_481c67c4);
      if (bVar11 == 0) {
        FUN_ram_4802af2c(apppppuStack_180,"false");
        if ((char)bStack_171 < '\0') goto LAB_ram_4806de00;
LAB_ram_4806dc30:
        if (((undefined4 ******)apppppuStack_180[0] == (undefined4 ******)0x0) ||
           (uVar8 = uStack_178, uStack_178 == 0)) goto LAB_ram_4806dc4c;
LAB_ram_4806dc38:
        pbVar6 = (byte *)FUN_ram_4802b206(apppppuStack_180,uVar8 - 1);
        if ((*pbVar6 & 0xdf) != 0x5b) goto LAB_ram_4806dc4c;
      }
      else {
        FUN_ram_4802af2c(apppppuStack_180,&DAT_ram_481c3dec);
        if (-1 < (char)bStack_171) goto LAB_ram_4806dc30;
LAB_ram_4806de00:
        uVar8 = bStack_171 & 0x7f;
        if ((bStack_171 & 0x7f) != 0) goto LAB_ram_4806dc38;
LAB_ram_4806dc4c:
        FUN_ram_4802af5a(apppppuStack_180,0x2c);
      }
      FUN_ram_4802af5a(apppppuStack_180,0x22);
      FUN_ram_4802af2c(apppppuStack_180,"name");
      FUN_ram_4802af2c(apppppuStack_180,&DAT_ram_481c67c4);
      FUN_ram_4802af5a(apppppuStack_180,0x22);
      bVar11 = *pbVar3;
      pbVar6 = pbVar3;
      while (bVar11 != 0) {
        while ((bVar11 != 0x22 && (bVar11 != 0x5c))) {
          if (0x1f < bVar11) goto LAB_ram_4806dcb2;
          bVar11 = pbVar6[1];
          pbVar6 = pbVar6 + 1;
          if (bVar11 == 0) goto LAB_ram_4806dcc4;
        }
        FUN_ram_4802af5a(apppppuStack_180,0x5c);
LAB_ram_4806dcb2:
        pbVar6 = pbVar6 + 1;
        FUN_ram_4802af5a(apppppuStack_180,bVar11);
        bVar11 = *pbVar6;
      }
LAB_ram_4806dcc4:
      FUN_ram_4802af5a(apppppuStack_180,0x22);
      uVar12 = *(undefined4 *)(pbVar3 + 0x19);
      if ((char)bStack_171 < '\0') {
        uVar8 = bStack_171 & 0x7f;
        if ((bStack_171 & 0x7f) != 0) goto LAB_ram_4806dce2;
LAB_ram_4806dcf6:
        FUN_ram_4802af5a(apppppuStack_180,0x2c);
      }
      else {
        if (((undefined4 ******)apppppuStack_180[0] == (undefined4 ******)0x0) ||
           (uVar8 = uStack_178, uStack_178 == 0)) goto LAB_ram_4806dcf6;
LAB_ram_4806dce2:
        pbVar6 = (byte *)FUN_ram_4802b206(apppppuStack_180,uVar8 - 1);
        if ((*pbVar6 & 0xdf) != 0x5b) goto LAB_ram_4806dcf6;
      }
      FUN_ram_4802af5a(apppppuStack_180,0x22);
      FUN_ram_4802af2c(apppppuStack_180,"generation");
      FUN_ram_4802af2c(apppppuStack_180,&DAT_ram_481c67c4);
      FUN_ram_4802aa44(&iStack_170,uVar12,10);
      FUN_ram_4802ae48(apppppuStack_180,&iStack_170);
      FUN_ram_4802a59e(&iStack_170);
      uVar12 = *(undefined4 *)(pbVar3 + 0x1d);
      if ((char)bStack_171 < '\0') {
        uVar8 = bStack_171 & 0x7f;
        if ((bStack_171 & 0x7f) != 0) goto LAB_ram_4806dd4e;
LAB_ram_4806dd62:
        FUN_ram_4802af5a(apppppuStack_180,0x2c);
      }
      else {
        if (((undefined4 ******)apppppuStack_180[0] == (undefined4 ******)0x0) ||
           (uVar8 = uStack_178, uStack_178 == 0)) goto LAB_ram_4806dd62;
LAB_ram_4806dd4e:
        pbVar6 = (byte *)FUN_ram_4802b206(apppppuStack_180,uVar8 - 1);
        if ((*pbVar6 & 0xdf) != 0x5b) goto LAB_ram_4806dd62;
      }
      FUN_ram_4802af5a(apppppuStack_180,0x22);
      FUN_ram_4802af2c(apppppuStack_180,"persistedGeneration");
      FUN_ram_4802af2c(apppppuStack_180,&DAT_ram_481c67c4);
      FUN_ram_4802aa44(&iStack_170,uVar12,10);
      FUN_ram_4802ae48(apppppuStack_180,&iStack_170);
      FUN_ram_4802a59e(&iStack_170);
      FUN_ram_4802af5a(apppppuStack_180,0x7d);
      cVar14 = cVar14 + '\x01';
      pbVar3 = pbVar3 + 0x24;
      if (cVar14 == '\b') {
        FUN_ram_4802af2c(apppppuStack_180,&DAT_ram_481c43f4);
        iVar5 = DAT_ram_4ff6ded8;
        if ((char)bStack_171 < '\0') {
          apppppuStack_180[0] = apppppuStack_180;
          uStack_184 = bStack_171 & 0x7f;
        }
        else {
          uStack_184 = 0;
          if ((undefined4 ******)apppppuStack_180[0] != (undefined4 ******)0x0) {
            uStack_184 = uStack_178;
          }
        }
        iVar4 = *(int *)(DAT_ram_4ff6ded8 + 0x40);
        iVar13 = *(int *)(DAT_ram_4ff6ded8 + 0x4c);
        uStack_18c = 200;
        cVar14 = *(char *)(iVar4 * 0x1d40 + iVar13 + 0x44c);
        pppppuStack_188 = apppppuStack_180[0];
        if ((cVar14 != '\0') && (cVar14 != '\x06')) {
          puVar2 = (undefined4 *)(DAT_ram_4ff6ded8 + 0x28);
          if (((code *)*puVar2 != (code *)0x0) && (*(char *)(DAT_ram_4ff6ded8 + 0x2c) == '\0')) {
            *(undefined1 *)(DAT_ram_4ff6ded8 + 0x2c) = 1;
            (*(code *)*puVar2)(&uStack_18c,&pppppuStack_188,&uStack_184);
            *(undefined1 *)(iVar5 + 0x2c) = 0;
          }
          uVar8 = uStack_184;
          if (uStack_184 == 0) {
            uVar8 = 1;
          }
          iVar7 = FUN_ram_4ff206d8(uVar8,0x404);
          iVar4 = iVar4 * 0x1d40;
          iVar10 = iVar13 + iVar4;
          *(int *)(iVar10 + 0x1cdc) = iVar7;
          if (iVar7 == 0) {
            if (*(char *)(iVar10 + 0x44c) != '\0') {
              FUN_ram_48065e9c(iVar13 + iVar4 + 0x1c,7);
            }
          }
          else {
            if (uStack_184 != 0) {
              FUN_ram_4ff45158(iVar7,pppppuStack_188,uStack_184);
              iVar7 = *(int *)(iVar10 + 0x1cdc);
            }
            iVar4 = *(int *)(iVar5 + 0x4c) + *(int *)(iVar5 + 0x40) * 0x1d40;
            if ((*(char *)(iVar4 + 0x44c) != '\0') && (*(char *)(iVar4 + 0x44c) != '\x06')) {
              *(int *)(iVar4 + 0x1ce0) = iVar7;
              *(uint *)(iVar4 + 0x1ce4) = uStack_184;
              *(undefined4 *)(iVar4 + 0x1ce8) = 0;
              puStack_16c = &LAB_ram_4802d3f2;
              iStack_170 = iVar4;
              FUN_ram_48066484(iVar5,uStack_18c,"application/json",iVar4,&LAB_ram_4802d3f2);
            }
          }
        }
        FUN_ram_4802a59e(apppppuStack_180);
        return;
      }
      FUN_ram_4802af5a(apppppuStack_180,0x2c);
      FUN_ram_4802af5a(apppppuStack_180,0x7b);
      if (-1 < (char)bStack_171) goto LAB_ram_4806daa2;
LAB_ram_4806dddc:
      uVar8 = bStack_171 & 0x7f;
    } while ((bStack_171 & 0x7f) == 0);
  } while( true );
}


