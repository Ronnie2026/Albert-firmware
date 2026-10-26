/* Firmware entry: 0x480d387c */

void FUN_ram_480d387c(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char cStack_a89;
  int aiStack_a88 [18];
  undefined1 uStack_a40;
  byte bStack_a00;
  undefined4 local_9f8 [284];
  char local_588 [12];
  char acStack_57c [28];
  undefined1 auStack_560 [4];
  undefined4 uStack_55c;
  char local_60 [12];
  char acStack_54 [29];
  undefined1 uStack_37;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(auStack_560,0,0x530);
  uStack_37 = 0xff;
  uStack_55c = 1;
  iVar4 = FUN_ram_4802d110(auStack_560);
  pcVar7 = local_60;
  if (iVar4 == 0) {
    if (*(char *)(param_1 + 0x5b5) != '\0') {
      *(undefined1 *)(param_1 + 0x5b8) = 1;
      *(int *)(param_1 + 0x54c) = param_2;
      *(char **)(param_1 + 0x5c0) = "snapshot_failed";
    }
  }
  else {
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      if (cVar1 != '\0') {
        *(undefined1 *)(param_1 + 0x5b9) = 0;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
    } while (acStack_54 != pcVar7);
    if (((*(int *)(param_1 + 0x540) != 0) && (*(char *)(param_1 + 0x5b5) != '\0')) &&
       ((*(char *)(param_1 + 0x5b9) == '\0' || (4999 < (uint)(param_2 - *(int *)(param_1 + 0x550))))
       )) {
      memset(aiStack_a88,0,0x528);
      aiStack_a88[1] = 1;
      fence();
      DAT_ram_4ff6df84 = 1;
      if ((DAT_ram_4ff6df88 == 0) || (iVar4 = FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0x32), iVar4 != 1))
      {
        fence();
        DAT_ram_4ff6df84 = 0;
        fence();
      }
      else {
        FUN_ram_4ff45158(aiStack_a88,DAT_ram_4ff6df8c,0x524);
        FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
        (**(code **)(param_1 + 0x540))(aiStack_a88,0);
        pcVar7 = local_588;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          if (cVar1 != '\0') {
            aiStack_a88[0] = aiStack_a88[0] + 1;
            iVar4 = FUN_ram_480d175e(param_1,aiStack_a88);
            if ((iVar4 != 0) && (iVar4 = FUN_ram_480d18ce(param_1 + 4,aiStack_a88), iVar4 != 0)) {
              FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0xffffffff);
              piVar2 = DAT_ram_4ff6df8c;
              FUN_ram_4ff4522c(DAT_ram_4ff6df8c + 0x140,local_588,0xc);
              iVar4 = DAT_ram_4ff6df88;
              *piVar2 = aiStack_a88[0];
              FUN_ram_4ff3afa2(iVar4,0,0,0);
              fence();
              DAT_ram_4ff6df84 = 0;
              FUN_ram_4ff45158(param_1 + 0x18,aiStack_a88,0x524);
              *(undefined1 *)(param_1 + 0x5bb) = 1;
              iVar5 = FUN_ram_480b063e();
              iVar4 = DAT_ram_4ff6dcdc;
              if (iVar5 != 0) {
                FUN_ram_4ff45158(DAT_ram_4ff6dcdc + 0x22540,aiStack_a88,0x524);
                *(undefined1 *)(iVar4 + 0x41112) = 1;
                cStack_a89 = '\0';
                iVar5 = FUN_ram_480b1222(iVar4 + 0x30,aiStack_a88,FUN_ram_480b356e,&cStack_a89);
                if (iVar5 == 0) {
                  *(undefined1 *)(iVar4 + 0x41111) = 0;
                  *(char **)(iVar4 + 0x41114) = "outbox_full_or_invalid";
                }
                else if (cStack_a89 != '\0') {
                  FUN_ram_480b0ed4();
                }
              }
              *(undefined2 *)(param_1 + 0x5b6) = 0;
              *(undefined2 *)(param_1 + 0x5b8) = 0;
              *(undefined4 *)(param_1 + 0x550) = 0;
              *(int *)(param_1 + 0x548) = param_2;
              *(int *)(param_1 + 0x544) = aiStack_a88[0];
              *(undefined1 *)(param_1 + 0x5be) = uStack_a40;
              *(undefined1 **)(param_1 + 0x5c0) = &DAT_ram_481df390;
              *(undefined2 *)(param_1 + 0x5bc) = 0x100;
              if (bStack_a00 == 0) {
                *(undefined4 *)(param_1 + 0x554) = 0;
                *(undefined1 *)(param_1 + 0x5ba) = 0;
                *(undefined1 *)(param_1 + 0x5b4) = 0;
                *(undefined1 *)(param_1 + 0x558) = 0;
                *(undefined1 *)(param_1 + 0x559) = 0;
                *(undefined1 *)(param_1 + 0x55a) = 0;
                *(undefined1 *)(param_1 + 0x55b) = 0;
                *(undefined1 *)(param_1 + 0x55c) = 0;
                *(undefined1 *)(param_1 + 0x55d) = 0;
                *(undefined1 *)(param_1 + 0x55e) = 0;
                *(undefined1 *)(param_1 + 0x55f) = 0;
                *(undefined1 *)(param_1 + 0x560) = 0;
                *(undefined1 *)(param_1 + 0x561) = 0;
                *(undefined1 *)(param_1 + 0x562) = 0;
                *(undefined1 *)(param_1 + 0x563) = 0;
                memset((void *)(param_1 + 0x564),0,0x50);
                if (*(char *)(param_1 + 0x10) == '\0') {
                  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
                  return;
                }
                *(undefined1 *)(param_1 + 0x5b4) = 0;
                *(char *)(param_1 + 0x558) = local_588[0];
                *(char *)(param_1 + 0x559) = local_588[1];
                *(char *)(param_1 + 0x55a) = local_588[2];
                *(char *)(param_1 + 0x55b) = local_588[3];
                *(char *)(param_1 + 0x55c) = local_588[4];
                *(char *)(param_1 + 0x55d) = local_588[5];
                *(char *)(param_1 + 0x55e) = local_588[6];
                *(char *)(param_1 + 0x55f) = local_588[7];
                *(char *)(param_1 + 0x560) = local_588[8];
                *(char *)(param_1 + 0x561) = local_588[9];
                *(char *)(param_1 + 0x562) = local_588[10];
                *(char *)(param_1 + 0x563) = local_588[0xb];
              }
              else {
                *(undefined4 *)(param_1 + 0x554) = local_9f8[0];
                *(undefined1 *)(param_1 + 0x5ba) = 0;
                *(undefined1 *)(param_1 + 0x5b4) = 0;
                *(undefined1 *)(param_1 + 0x558) = 0;
                *(undefined1 *)(param_1 + 0x559) = 0;
                *(undefined1 *)(param_1 + 0x55a) = 0;
                *(undefined1 *)(param_1 + 0x55b) = 0;
                *(undefined1 *)(param_1 + 0x55c) = 0;
                *(undefined1 *)(param_1 + 0x55d) = 0;
                *(undefined1 *)(param_1 + 0x55e) = 0;
                *(undefined1 *)(param_1 + 0x55f) = 0;
                *(undefined1 *)(param_1 + 0x560) = 0;
                *(undefined1 *)(param_1 + 0x561) = 0;
                *(undefined1 *)(param_1 + 0x562) = 0;
                *(undefined1 *)(param_1 + 0x563) = 0;
                puVar6 = memset((void *)(param_1 + 0x564),0,0x50);
                if (*(char *)(param_1 + 0x10) == '\0') {
                  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
                  return;
                }
                *(char *)(param_1 + 0x561) = local_588[9];
                *(char *)(param_1 + 0x563) = local_588[0xb];
                *(char *)(param_1 + 0x558) = local_588[0];
                *(char *)(param_1 + 0x559) = local_588[1];
                *(char *)(param_1 + 0x55a) = local_588[2];
                *(char *)(param_1 + 0x55b) = local_588[3];
                *(char *)(param_1 + 0x55c) = local_588[4];
                *(char *)(param_1 + 0x55d) = local_588[5];
                *(char *)(param_1 + 0x55e) = local_588[6];
                *(char *)(param_1 + 0x55f) = local_588[7];
                *(char *)(param_1 + 0x560) = local_588[8];
                *(char *)(param_1 + 0x562) = local_588[10];
                if (0x14 < bStack_a00) {
                  bStack_a00 = 0x14;
                }
                *(byte *)(param_1 + 0x5b4) = bStack_a00;
                puVar8 = local_9f8;
                bVar3 = 0;
                do {
                  bVar3 = bVar3 + 1;
                  *puVar6 = *puVar8;
                  puVar8 = puVar8 + 0xe;
                  puVar6 = puVar6 + 1;
                } while (bVar3 < bStack_a00);
              }
              *(undefined1 *)(param_1 + 0x5ba) = 1;
              gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
              return;
            }
            FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0xffffffff);
            FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
            fence();
            iVar4 = -0x28c;
            goto LAB_ram_480d3a7e;
          }
        } while (acStack_57c != pcVar7);
        FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0xffffffff);
        FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
        fence();
        iVar4 = -0x100;
LAB_ram_480d3a7e:
        DAT_ram_4ff6df84 = 0;
        *(int *)(param_1 + 0x550) = param_2;
        *(int *)(param_1 + 0x54c) = param_2;
        *(char **)(param_1 + 0x5c0) =
             "[FATAL] Online OTA owner PSRAM workspace unavailable" + iVar4 + 4;
        *(undefined **)(param_1 + 0x5b8) = &sedeleg;
      }
    }
  }
  return;
}


