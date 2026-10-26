/* Firmware entry: 0x4805ebaa */

undefined8 FUN_ram_4805ebaa(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_1,0xffffffff);
  if (((byte)(*(char *)(param_1 + 0x128c) - 1U) < 2) && (param_2 < *(byte *)(param_1 + 0xc))) {
    iVar3 = param_2 * 0x50 + param_1;
    bVar1 = *(byte *)(iVar3 + 0x18);
    uVar7 = bVar1 & 1;
    iVar5 = param_2 * 0x120 + param_1;
    if ((bVar1 & 1) == 0) {
      iVar5 = iVar5 + 0x60;
      uVar8 = uVar7;
      goto LAB_ram_4805ed3c;
    }
    if ((*(char *)(iVar5 + 0x2f6) != '\0') && (2 < *(byte *)(iVar5 + 0x2f5))) {
      iVar2 = 0;
LAB_ram_4805ec46:
      uVar8 = (uint)*(byte *)(iVar5 + 0x2f4);
      do {
        if (iVar2 == 2) {
LAB_ram_4805ec52:
          *(char *)(iVar3 + 0x19) = (char)uVar8;
          *(undefined1 *)(param_1 + param_2 + 0x1288) = 1;
          *(undefined4 *)(param_1 + 0x150) = 0;
          *(undefined1 *)(param_1 + 0x154) = 0;
          pvVar6 = (void *)(param_1 + 0x162);
          do {
            *(undefined1 *)((int)pvVar6 + -10) = 1;
            *(undefined4 *)((int)pvVar6 + -6) = 0;
            *(undefined2 *)((int)pvVar6 + -2) = 0;
            pvVar6 = memset(pvVar6,0,0x20);
            *(undefined1 *)((int)pvVar6 + 0x20) = 0;
            *(undefined4 *)((int)pvVar6 + 0x22) = 100;
            *(undefined1 *)((int)pvVar6 + 0x26) = 0;
            *(undefined1 *)((int)pvVar6 + 0x3a) = 0;
            *(undefined4 *)((int)pvVar6 + 0x3e) = 0;
            *(undefined1 *)((int)pvVar6 + 0x42) = 0xff;
            *(undefined1 *)((int)pvVar6 + 0x27) = 0;
            *(undefined1 *)((int)pvVar6 + 0x28) = 0;
            *(undefined1 *)((int)pvVar6 + 0x29) = 0;
            *(undefined1 *)((int)pvVar6 + 0x2a) = 0;
            *(undefined1 *)((int)pvVar6 + 0x2b) = 1;
            *(undefined1 *)((int)pvVar6 + 0x2c) = 0;
            *(undefined1 *)((int)pvVar6 + 0x2d) = 0;
            *(undefined1 *)((int)pvVar6 + 0x2e) = 0xff;
            *(undefined1 *)((int)pvVar6 + 0x2f) = 0;
            *(undefined1 *)((int)pvVar6 + 0x30) = 0;
            *(undefined1 *)((int)pvVar6 + 0x31) = 0;
            *(undefined1 *)((int)pvVar6 + 0x32) = 0;
            *(undefined1 *)((int)pvVar6 + 0x33) = 0;
            *(undefined1 *)((int)pvVar6 + 0x34) = 0x1d;
            *(undefined1 *)((int)pvVar6 + 0x35) = 0xff;
            *(undefined1 *)((int)pvVar6 + 0x36) = 0;
            *(undefined1 *)((int)pvVar6 + 0x37) = 0;
            *(undefined1 *)((int)pvVar6 + 0x38) = 0;
            *(undefined1 *)((int)pvVar6 + 0x39) = 0;
            pvVar6 = (void *)((int)pvVar6 + 0x50);
          } while (pvVar6 != (void *)(param_1 + 0x2a2));
          if (*(char *)(param_1 + 0x128c) == '\x02') {
            *(undefined1 *)(param_1 + 0x128c) = 1;
          }
          FUN_ram_4ff3ee10(param_1);
          uVar4 = 1;
          iVar3 = 0;
          uVar7 = 0;
          goto LAB_ram_4805ebf2;
        }
        iVar5 = iVar5 + 0x60;
        if (iVar2 == 0) {
LAB_ram_4805ed3c:
          if ((bVar1 & 2) == 0) {
            iVar5 = iVar5 + 0x60;
            goto LAB_ram_4805ed52;
          }
          iVar2 = 1;
          uVar7 = 2;
        }
        else {
LAB_ram_4805ed52:
          if ((bVar1 & 4) == 0) goto LAB_ram_4805ec52;
          iVar2 = 2;
          uVar7 = 4;
        }
        if ((*(char *)(iVar5 + 0x2f6) == '\0') || (*(byte *)(iVar5 + 0x2f5) < 3)) break;
        if (uVar8 == 0) goto LAB_ram_4805ec46;
        if (*(byte *)(iVar5 + 0x2f4) != uVar8) {
          FUN_ram_4ff3ee10(param_1);
          uVar4 = 0;
          iVar3 = 0xd;
          uVar8 = 0;
          goto LAB_ram_4805ebf2;
        }
      } while( true );
    }
    FUN_ram_4ff3ee10(param_1);
    uVar4 = 0;
    iVar3 = 0xc;
    uVar8 = 0;
  }
  else {
    FUN_ram_4ff3ee10(param_1);
    uVar4 = 0;
    iVar3 = 0x10;
    uVar7 = 0;
    uVar8 = 0;
  }
LAB_ram_4805ebf2:
  return CONCAT44(uVar8,uVar7 << 0x18 | uVar4 | iVar3 << 8 | param_2 << 0x10);
}


