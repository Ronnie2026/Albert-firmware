/* Firmware entry: 0x480b7404 */

void FUN_ram_480b7404(int param_1,char *param_2,uint param_3)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  size_t sVar7;
  int iVar8;
  void *pvVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte *pbVar14;
  uint uVar15;
  undefined4 *puVar16;
  char *pcVar17;
  byte *__s;
  int iVar18;
  undefined1 *puVar19;
  int iVar20;
  undefined8 uVar21;
  char *pcStack_5c;
  int iStack_58;
  
  iVar4 = DAT_ram_4ff6dc9c;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(DAT_ram_4ff6dc9c + 0x87b6b) == '\0') {
    puVar16 = &DAT_ram_4ff5bd30;
  }
  else {
    puVar16 = (undefined4 *)(DAT_ram_4ff6dc9c + 0x86948);
  }
  uVar6 = puVar16[1];
  uVar10 = puVar16[2];
  uVar12 = puVar16[3];
  uVar13 = puVar16[4];
  *(undefined4 *)(DAT_ram_4ff6dc9c + 0x8695c) = *puVar16;
  *(undefined4 *)(iVar4 + 0x86960) = uVar6;
  *(undefined4 *)(iVar4 + 0x86964) = uVar10;
  *(undefined4 *)(iVar4 + 0x86968) = uVar12;
  *(undefined4 *)(iVar4 + 0x8696c) = uVar13;
  *(undefined2 *)(iVar4 + 0x87b6a) = 0;
  if (param_3 < 0x8001) {
    iStack_58 = param_3 + 1;
    pcStack_5c = param_2;
  }
  else {
    param_1 = 0x1f6;
    pcStack_5c = "{\"ok\":false,\"error\":\"receipt_too_large\"}";
    iStack_58 = 0x29;
    param_3 = 0x28;
  }
  FUN_ram_4ff45158(iVar4 + 0x7975e,pcStack_5c,param_3);
  *(undefined1 *)(iVar4 + param_3 + 0x7975e) = 0;
  __s = (byte *)(iVar4 + 0x8175f);
  *(uint *)(iVar4 + 0x87b40) = param_3;
  *(int *)(iVar4 + 0x87b48) = param_1;
  FUN_ram_4ff454c4(__s,iVar4 + 0x86970);
  puVar19 = (undefined1 *)(iVar4 + 0x85a85);
  iVar20 = iVar4 + 0x817a0;
  do {
    uVar1 = *puVar19;
    puVar19 = puVar19 + 1;
    FUN_ram_4819ad74(iVar20,3,&DAT_ram_481c3b70,uVar1);
    iVar18 = DAT_ram_4ff6dc94;
    iVar20 = iVar20 + 2;
  } while (puVar19 != (undefined1 *)(iVar4 + 0x85aa5));
  *(undefined **)(DAT_ram_4ff6dc94 + 0x9618) = &sedeleg;
  *(int *)(iVar18 + 0x116a0) = param_1;
  uVar10 = *(undefined4 *)(iVar4 + 0x86964);
  uVar12 = *(undefined4 *)(iVar4 + 0x86968);
  uVar13 = *(undefined4 *)(iVar4 + 0x8696c);
  uVar6 = *(undefined4 *)(iVar4 + 0x86960);
  iVar20 = iVar18 + 0x9398;
  *(undefined4 *)(iVar18 + 0x116a4) = *(undefined4 *)(iVar4 + 0x8695c);
  *(undefined4 *)(iVar18 + 0x116a8) = uVar6;
  *(undefined4 *)(iVar18 + 0x116ac) = uVar10;
  *(undefined4 *)(iVar18 + 0x116b0) = uVar12;
  *(undefined4 *)(iVar18 + 0x116b4) = uVar13;
  FUN_ram_4ff454c4(iVar18 + 0x961a,__s);
  FUN_ram_4ff454c4(iVar18 + 0x965b,iVar4 + 0x817a0);
  FUN_ram_4ff45158(iVar18 + 0x969c,iVar4 + 0x7975e,iStack_58);
  if (((param_1 == 0x199) && (iVar8 = FUN_ram_4ff453ae(iVar4 + 0x869b1,"api_call"), iVar8 == 0)) &&
     (iVar8 = FUN_ram_4ff453ae(iVar4 + 0x869c5,&DAT_ram_481c87bc), iVar8 == 0)) {
    uVar21 = FUN_ram_48078fbc(pcStack_5c,param_3,"error");
    pcVar17 = (char *)((ulonglong)uVar21 >> 0x20);
    if ((((int)uVar21 != 0) && (*pcVar17 == '\"')) &&
       (((int)uVar21 == 0x13 &&
        (iVar8 = FUN_ram_4ff4511a(pcVar17,"\"settings_conflict\""), iVar8 == 0)))) {
      do {
        if (*(char *)(iVar20 + 0x4c) == '\0') {
          *(undefined1 *)(iVar20 + 0x4c) = 1;
          FUN_ram_4ff454c4(iVar20,iVar4 + 0x86970);
          uVar6 = DAT_ram_4ff5bd40;
          *(undefined4 *)(iVar20 + 0x44) = *(undefined4 *)(iVar4 + 0x86a20);
          *(undefined4 *)(iVar20 + 0x48) = uVar6;
          uVar6 = *(undefined4 *)(iVar4 + 0x8696c);
          goto LAB_ram_480b75a6;
        }
        iVar20 = iVar20 + 0x50;
      } while (iVar18 + 0x9618 != iVar20);
    }
    uVar6 = *(undefined4 *)(iVar4 + 0x8696c);
  }
  else {
    uVar6 = *(undefined4 *)(iVar4 + 0x8696c);
  }
LAB_ram_480b75a6:
  bVar2 = *(byte *)(iVar4 + 0x8175f);
  if ((bVar2 != 0) && (sVar7 = strlen((char *)__s), pbVar14 = __s, sVar7 < 0x41)) {
    do {
      if ((0x19 < (byte)((bVar2 & 0xdf) + 0xbf)) &&
         (((9 < (byte)(bVar2 - 0x30) && (1 < (byte)(bVar2 - 0x2d))) && (bVar2 != 0x5f))))
      goto LAB_ram_480b75fe;
      bVar2 = pbVar14[1];
      pbVar14 = pbVar14 + 1;
    } while (bVar2 != 0);
    iVar18 = iVar4 + 0x86a7c;
    for (iVar20 = iVar18; iVar20 != iVar4 + 0x86dfc; iVar20 = iVar20 + 0x70) {
      if ((*(char *)(iVar20 + 0x6c) != '\0') && (iVar8 = FUN_ram_4ff453ae(iVar20,__s), iVar8 == 0))
      goto LAB_ram_480b75fe;
    }
    pcVar17 = (char *)(iVar4 + 0x86ae8);
    uVar5 = 0;
    do {
      cVar3 = *pcVar17;
      pcVar17 = pcVar17 + 0x70;
      if (cVar3 == '\0') {
        iVar20 = uVar5 << 3;
        goto LAB_ram_480b77bc;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 8);
    uVar15 = *(uint *)(iVar4 + 0x86dfc);
    uVar11 = uVar15 + 8;
    do {
      uVar5 = uVar15 & 7;
      iVar20 = uVar5 * 8;
      uVar15 = uVar15 + 1;
      if (*(char *)(uVar5 * 0x70 + iVar4 + 0x86ae9) == '\0') goto LAB_ram_480b77bc;
    } while (uVar11 != uVar15);
  }
LAB_ram_480b75fe:
  iVar20 = FUN_ram_480b66f6();
  if (iVar20 == 0) {
    *(char **)(iVar4 + 0x87bc0) = "receipt_store_wait";
  }
  else {
    *(undefined1 *)(iVar4 + 0x8175f) = 0;
    *(undefined4 *)(iVar4 + 0x87b40) = 0;
  }
  if (*(int *)(iVar4 + 0x86a78) != 0) {
    FUN_ram_481295cc();
    *(undefined4 *)(iVar4 + 0x86a78) = 0;
  }
  uVar6 = FUN_ram_48025ba6();
  *(undefined4 *)(iVar4 + 0x87b50) = uVar6;
  return;
LAB_ram_480b77bc:
  iVar8 = (iVar20 - uVar5) * 0x10;
  pvVar9 = memset((void *)(iVar18 + iVar8),0,0x6e);
  FUN_ram_4ff454c4(pvVar9,__s);
  FUN_ram_4ff45158(iVar8 + 0x41 + iVar18,(undefined1 *)(iVar4 + 0x85a85),0x20);
  iVar20 = iVar4 + 0x87000 + iVar8;
  *(int *)(iVar20 + -0x520) = param_1;
  *(undefined4 *)(iVar20 + -0x51c) = uVar6;
  *(undefined **)(iVar8 + iVar4 + 0x86ae8) = &sedeleg;
  *(uint *)(iVar4 + 0x86dfc) = uVar5 + 1 & 7;
  goto LAB_ram_480b75fe;
}


