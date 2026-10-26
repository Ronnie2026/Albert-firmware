/* Firmware entry: 0x480927f2 */

int FUN_ram_480927f2(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined2 auStack_e0 [2];
  undefined1 *puStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined1 uStack_8a;
  undefined1 uStack_7c;
  undefined1 uStack_66;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dc58 != 0) {
    fence();
    fence();
    if (((DAT_ram_4ff6df38 != '\0') &&
        (iVar2 = FUN_ram_4ff2bcc4(), iVar4 = DAT_ram_4ff6dc58, iVar2 == 0)) &&
       (fence(), DAT_ram_4ff6df94 != '\0')) {
      if (*(char *)(DAT_ram_4ff6dc58 + 0x2c) == '\x02') {
        iVar6 = 0x88c;
        iVar2 = 0x18;
        iVar5 = 0;
      }
      else if (*(char *)(DAT_ram_4ff6dc58 + 0x35a4) == '\x02') {
        iVar6 = 0x3e04;
        iVar2 = 0x3590;
        iVar5 = 1;
      }
      else {
        if (*(char *)(DAT_ram_4ff6dc58 + 0x6b1c) != '\x02') goto LAB_ram_48092816;
        iVar6 = 0x737c;
        iVar2 = 0x6b08;
        iVar5 = 2;
      }
      iVar6 = iVar6 + DAT_ram_4ff6dc58;
      FUN_ram_4ff3ec14(iVar6,0xffffffff);
      iVar5 = iVar5 * 0x3578 + iVar4;
      if ((((*(char *)(iVar5 + 0x895) == '\0') || (*(char *)(iVar5 + 0x896) != '\0')) ||
          ((*(char *)(iVar5 + 0x89a) != '\0' ||
           ((*(char *)(iVar5 + 0x89b) != '\0' || (iVar5 = FUN_ram_4ff2bcc4(), iVar5 != 0)))))) ||
         (fence(), *(char *)(iVar4 + 0x18c6b) == '\0')) {
        FUN_ram_4ff3ee10(iVar6);
      }
      else {
        uVar3 = FUN_ram_4ff21a0a();
        iVar4 = FUN_ram_4ff26908(iVar4 + iVar2,uVar3);
        if (iVar4 == 0) {
          FUN_ram_4ff3ee10(iVar6);
        }
        else {
          FUN_ram_4ff3ee10(iVar6);
          if ((DAT_ram_4ff6dfc8 != (code *)0x0) && (DAT_ram_4ff6dfc4 != (code *)0x0)) {
            puStack_dc = &LAB_ram_4802c5e2;
            auStack_e0[0] = 0x40;
            uStack_d8 = FUN_ram_48025b94();
            puVar1 = DAT_ram_4ff6420c;
            uStack_d4 = 1000;
            uStack_d0 = 1;
            if ((DAT_ram_4ff6420c == (undefined2 *)0x0) ||
               ((*(code **)(DAT_ram_4ff6420c + 2) != (code *)0x0 &&
                (iVar4 = (**(code **)(DAT_ram_4ff6420c + 2))(),
                *(uint *)(puVar1 + 6) <= (uint)(iVar4 - *(int *)(puVar1 + 4)))))) {
              DAT_ram_4ff62c2c = auStack_e0;
              DAT_ram_4ff6420c = DAT_ram_4ff62c2c;
            }
            FUN_ram_4ff3c43c(0,0x18);
            uStack_c4 = DAT_ram_48222d50;
            uStack_c0 = DAT_ram_48222d54;
            uStack_bc = DAT_ram_48222d58;
            uStack_b8 = DAT_ram_48222d5c;
            uStack_cc = DAT_ram_48222d48;
            uStack_c8 = DAT_ram_48222d4c;
            uStack_b4 = DAT_ram_48222d60;
            uStack_b0 = DAT_ram_48222d64;
            uStack_ac = DAT_ram_48222d68;
            uStack_ec = 0;
            uStack_e8 = 0;
            uStack_e4 = 0;
            iVar4 = FUN_ram_4809256c(DAT_ram_4ff6dc58,&uStack_cc,&uStack_ec,&uStack_e8,&uStack_e4,1)
            ;
            memset(auStack_a8,0,0x88);
            uStack_a0 = 8;
            uStack_7c = 8;
            uStack_8a = 1;
            uStack_66 = 1;
            if (iVar4 != 0) {
              (*DAT_ram_4ff6dfc8)(&uStack_cc,DAT_ram_4ff6dc58,uStack_ec,uStack_e8,uStack_e4,
                                  auStack_a8,DAT_ram_4ff6dfc8);
              FUN_ram_4ff3c43c(0,0x14);
              (*DAT_ram_4ff6dfc4)(auStack_a8);
              DAT_ram_4ff62c2c = puVar1;
              DAT_ram_4ff6420c = puVar1;
              return iVar4;
            }
            FUN_ram_4ff3c43c(0,0x14);
            DAT_ram_4ff62c2c = puVar1;
            DAT_ram_4ff6420c = puVar1;
            return 0;
          }
        }
      }
    }
  }
LAB_ram_48092816:
  FUN_ram_4ff3c43c(0,0x14);
  return 0;
}


