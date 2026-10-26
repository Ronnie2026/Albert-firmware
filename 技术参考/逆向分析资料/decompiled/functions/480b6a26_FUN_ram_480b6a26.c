/* Firmware entry: 0x480b6a26 */

int FUN_ram_480b6a26(byte param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 local_8f0 [561];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar7 = local_8f0;
  if ((((DAT_ram_4ff6dc94 != (undefined4 *)0x0) &&
       (*(char *)((int)DAT_ram_4ff6dc94 + 0x1e931) != '\0')) &&
      (iVar5 = FUN_ram_480b5ab0(), iVar5 != 0)) &&
     (((char)DAT_ram_4ff5bd64 == '\0' && (DAT_ram_4ff5bd64._1_1_ == '\0')))) {
    iVar6 = FUN_ram_48025ba6();
    FUN_ram_4ff3ec14(&DAT_ram_4ff69340,0xffffffff);
    cVar2 = DAT_ram_4ff69dc4;
    iVar5 = DAT_ram_4ff69dc0;
    cVar1 = DAT_ram_4ff69dbc;
    FUN_ram_4ff3ee10(&DAT_ram_4ff69340);
    puVar4 = DAT_ram_4ff6dc94;
    if ((((cVar2 != '\0') && (((uint)(iVar6 - iVar5) < 0x1f5 && (cVar1 == '\x01')))) &&
        (*(char *)(DAT_ram_4ff6dc94 + 0x4690) == '\0')) &&
       (*(char *)(DAT_ram_4ff6dc94 + 0x4672) == '\0')) {
      memset(local_8f0,0,0x460);
      memset(local_8f0 + 0x118,0,0x460);
      memset(puVar4 + 0x4690,0,0xc48);
      puVar4[0x470f] = 1;
      puVar12 = puVar4 + 0x4732;
      do {
        uVar8 = puVar7[1];
        uVar9 = puVar7[2];
        uVar10 = puVar7[3];
        *puVar12 = *puVar7;
        puVar12[1] = uVar8;
        puVar12[2] = uVar9;
        puVar12[3] = uVar10;
        puVar7 = puVar7 + 4;
        puVar12 = puVar12 + 4;
      } while (puVar7 != local_8f0 + 0x118);
      puVar4[0x4859] = 1;
      puVar12 = local_8f0 + 0x118;
      puVar7 = puVar4 + 0x487c;
      do {
        uVar8 = *puVar12;
        uVar9 = puVar12[1];
        uVar10 = puVar12[2];
        puVar7[3] = puVar12[3];
        *puVar7 = uVar8;
        puVar7[1] = uVar9;
        puVar7[2] = uVar10;
        uVar3 = DAT_ram_4ff6dd80;
        uVar11 = DAT_ram_4ff5bd40;
        uVar10 = DAT_ram_4ff5bd3c;
        uVar9 = DAT_ram_4ff5bd38;
        uVar8 = DAT_ram_4ff5bd30;
        puVar12 = puVar12 + 4;
        puVar7 = puVar7 + 4;
      } while (puVar12 != local_8f0 + 0x230);
      puVar4[0x46e1] = DAT_ram_4ff5bd34;
      puVar4[0x46df] = uVar3;
      *(undefined1 *)(puVar4 + 0x49a5) = 0;
      *(undefined1 *)(puVar4 + 0x49a2) = 0;
      *(byte *)((int)puVar4 + 0x11a41) = param_1;
      *(undefined1 *)(puVar4 + 0x4690) = 1;
      puVar4[0x46e0] = uVar8;
      puVar4[0x46e2] = uVar9;
      puVar4[0x46e3] = uVar10;
      puVar4[0x46e4] = uVar11;
      FUN_ram_4ff454c4(puVar4 + 0x4691,param_2);
      if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
        FUN_ram_48032bca((int)puVar4 + 0x126d5);
      }
      else {
        FUN_ram_4ff454c4((int)puVar4 + 0x126d5,param_3);
      }
      FUN_ram_4ff454c4((int)puVar4 + 0x12716,param_2);
      *(byte *)((int)puVar4 + 0x1272e) = param_1;
      *(undefined1 *)((int)puVar4 + 0x1272f) = 0;
      iVar5 = DAT_ram_4ff6dc9c;
      if ((param_1 & 2) != 0) {
        iVar6 = FUN_ram_4802d110(DAT_ram_4ff6dcc8 + 0xa60);
        iVar5 = DAT_ram_4ff6dc9c;
        if (iVar6 == 0) {
          puVar4 = puVar4 + 0x24e6;
          puVar12 = DAT_ram_4ff6dc94 + 0x24e5;
          puVar7 = DAT_ram_4ff6dc94;
          do {
            uVar8 = puVar7[1];
            uVar9 = puVar7[2];
            uVar10 = puVar7[3];
            uVar11 = puVar7[4];
            *puVar4 = *puVar7;
            puVar4[1] = uVar8;
            puVar4[2] = uVar9;
            puVar4[3] = uVar10;
            puVar4[4] = uVar11;
            puVar7 = puVar7 + 5;
            puVar4 = puVar4 + 5;
          } while (puVar7 != puVar12);
          *puVar4 = *puVar7;
          return 0;
        }
        FUN_ram_4ff45158(DAT_ram_4ff6dc9c + 0x87080,DAT_ram_4ff6dcc8 + 0xa60,0x524);
      }
      FUN_ram_4ff45158(puVar4 + 0x470e,iVar5 + 0x87080,0x524);
      iVar5 = FUN_ram_480b66f6();
      if (iVar5 != 0) {
        fence();
        *(undefined4 *)(DAT_ram_4ff6dc9c + 0x54) = 0;
        fence();
        fence();
        *(undefined4 *)(DAT_ram_4ff6dc9c + 0x58) = 0;
        fence();
        uVar8 = FUN_ram_48025ba6();
        *(undefined4 *)(DAT_ram_4ff6dc9c + 0x87b50) = uVar8;
        return iVar5;
      }
    }
  }
  return 0;
}


