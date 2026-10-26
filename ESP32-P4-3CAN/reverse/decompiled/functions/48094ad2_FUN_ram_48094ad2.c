/* Firmware entry: 0x48094ad2 */

undefined1 FUN_ram_48094ad2(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  char cStack_15c;
  char cStack_15b;
  ushort uStack_15a;
  ushort uStack_158;
  ushort uStack_156;
  ushort uStack_154;
  uint auStack_150 [7];
  undefined4 uStack_134;
  undefined1 auStack_130 [264];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = param_3 + 0x874;
  FUN_ram_4ff3ec14(iVar2,0xffffffff);
  cVar1 = *(char *)(param_3 + 0x2bd4);
  FUN_ram_4ff45158(auStack_130,param_3 + 0x2ad4,0x100);
  FUN_ram_4ff3ee10(iVar2);
  if ((*(char *)(param_1 + 0x18c69) == '\0') && (cVar1 != '\0')) {
    FUN_ram_4802d92a(&cStack_15c,auStack_130,cVar1);
    if (cStack_15c != '\0') goto LAB_ram_48094b3c;
    if (param_2 == 0) goto LAB_ram_48094cfe;
    auStack_150[1] = 0;
    uVar4 = 0;
    if (cStack_15b != '\0') {
      uStack_134 = 8;
      auStack_150[0] = (uStack_156 & 0x7ff) << 5 | (uint)uStack_15a << 0x15;
      auStack_150[2] = (uStack_154 & 0x7ff) << 5 | (uint)uStack_158 << 0x15;
      auStack_150[3] = 0xc;
      iVar3 = FUN_ram_4ff2da86(param_2,0,auStack_150);
      FUN_ram_4ff3ec14(iVar2,0xffffffff);
      if (iVar3 != 0) goto LAB_ram_48094b6e;
      goto LAB_ram_48094c64;
    }
    auStack_150[3] = 4;
    auStack_150[0] = (uint)uStack_15a;
    auStack_150[2] = (uint)uStack_158;
    iVar3 = FUN_ram_4ff2da86(param_2,0,auStack_150);
    FUN_ram_4ff3ec14(iVar2,0xffffffff);
    uStack_156 = 0;
    uStack_154 = 0;
    if (iVar3 == 0) goto LAB_ram_48094c64;
  }
  else {
LAB_ram_48094b3c:
    if (param_2 == 0) {
LAB_ram_48094cfe:
      FUN_ram_4ff3ec14(iVar2,0xffffffff);
    }
    else {
      auStack_150[0] = 0;
      auStack_150[1] = 0;
      auStack_150[2] = 0;
      auStack_150[3] = 4;
      iVar3 = FUN_ram_4ff2da86(param_2,0,auStack_150);
      FUN_ram_4ff3ec14(iVar2,0xffffffff);
      if (iVar3 == 0) {
        uVar4 = 1;
        cStack_15b = '\0';
        uStack_15a = 0;
        uStack_158 = 0;
        uStack_156 = 0;
        uStack_154 = 0;
LAB_ram_48094c64:
        *(undefined1 *)(param_3 + 0x308d) = uVar4;
        *(char *)(param_3 + 0x308e) = cStack_15b;
        *(ushort *)(param_3 + 0x3090) = uStack_15a;
        *(ushort *)(param_3 + 0x3092) = uStack_158;
        *(ushort *)(param_3 + 0x3094) = uStack_156;
        *(ushort *)(param_3 + 0x3096) = uStack_154;
        *(undefined4 *)(param_3 + 0x8b0) = 0;
        *(undefined4 *)(param_3 + 0x8b4) = 0;
        uVar4 = 0;
        goto LAB_ram_48094b70;
      }
    }
  }
LAB_ram_48094b6e:
  uVar4 = 1;
LAB_ram_48094b70:
  *(undefined1 *)(param_3 + 0x884) = uVar4;
  FUN_ram_4ff3ee10(iVar2);
  return uVar4;
}


