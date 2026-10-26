/* Firmware entry: 0x4ff3351a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4ff3351a(undefined1 *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47dd8,0xffffffff);
  if (DAT_ram_4ff6e2b8 != '\0') {
    uVar6 = FUN_ram_4ff21a0a();
    uVar5 = (uint)uVar6 - DAT_ram_4ff6e2b0;
    uVar4 = (int)((ulonglong)uVar6 >> 0x20) - DAT_ram_4ff6e2b4;
    uVar3 = (uint)((uint)uVar6 < uVar5);
    if (((int)(uVar4 - uVar3) < 1) && ((uVar4 != uVar3 || (uVar5 < 200)))) {
      ets_delay_us(200 - uVar5);
    }
    DAT_ram_4ff6e2b8 = '\0';
  }
  uVar6 = __floatsidf(_DAT_ram_5012f000 & 0xff);
  uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_ram_481f4d98,DAT_ram_481f4d9c);
  uVar7 = __floatsidf(*(undefined4 *)(&DAT_ram_4ff586fc + (uint)DAT_ram_4ff47f94 * 0x14));
  uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_ram_481f4d88,DAT_ram_481f4d8c);
  uVar6 = __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                   (int)((ulonglong)uVar7 >> 0x20));
  __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_ram_481f4d90,DAT_ram_481f4d94);
  iVar2 = __fixdfsi();
  if ((DAT_ram_4ff47f9c == 999999) || (iVar2 < DAT_ram_4ff47f9c)) {
    if (iVar2 < DAT_ram_4ff5871c) goto LAB_ram_4ff3360a;
LAB_ram_4ff3370a:
    DAT_ram_4ff47f94 = 0;
    iVar2 = 0;
    DAT_ram_4ff47f9c = DAT_ram_4ff58704;
    DAT_ram_4ff47f98 = DAT_ram_4ff58708;
  }
  else {
    if (iVar2 <= DAT_ram_4ff47f98) {
      if (param_1 != (undefined1 *)0x0) {
        *param_1 = 0;
      }
      FUN_ram_4ff3ee10(&DAT_ram_4ff47dd8);
      sVar1 = (short)iVar2;
      goto LAB_ram_4ff336e4;
    }
    if (DAT_ram_4ff5871c <= iVar2) goto LAB_ram_4ff3370a;
LAB_ram_4ff3360a:
    if (iVar2 < DAT_ram_4ff58730) {
      if (DAT_ram_4ff5872c < iVar2) {
        if (iVar2 <= DAT_ram_4ff58740) goto LAB_ram_4ff3379e;
        iVar2 = 2;
        DAT_ram_4ff47f94 = 2;
        DAT_ram_4ff47f9c = DAT_ram_4ff5872c;
        DAT_ram_4ff47f98 = DAT_ram_4ff58730;
      }
      else if (DAT_ram_4ff58740 < iVar2) {
        iVar2 = 3;
        DAT_ram_4ff47f94 = 3;
        DAT_ram_4ff47f9c = DAT_ram_4ff58740;
        DAT_ram_4ff47f98 = DAT_ram_4ff58744;
      }
      else {
LAB_ram_4ff3379e:
        iVar2 = 4;
        DAT_ram_4ff47f94 = 4;
        DAT_ram_4ff47f9c = DAT_ram_4ff58754;
        DAT_ram_4ff47f98 = DAT_ram_4ff58758;
      }
    }
    else {
      iVar2 = 1;
      DAT_ram_4ff47f94 = 1;
      DAT_ram_4ff47f9c = DAT_ram_4ff58718;
      DAT_ram_4ff47f98 = DAT_ram_4ff5871c;
    }
  }
  FUN_ram_4ff31fb8(0x69,0,6,3,0,*(undefined1 *)(&DAT_ram_4ff58700 + iVar2 * 5));
  ets_delay_us(300);
  uVar6 = __floatsidf(_DAT_ram_5012f000 & 0xff);
  uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_ram_481f4d98,DAT_ram_481f4d9c);
  uVar7 = __floatsidf(*(undefined4 *)(&DAT_ram_4ff586fc + (uint)DAT_ram_4ff47f94 * 0x14));
  uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_ram_481f4d88,DAT_ram_481f4d8c);
  uVar6 = __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                   (int)((ulonglong)uVar7 >> 0x20));
  __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_ram_481f4d90,DAT_ram_481f4d94);
  sVar1 = __fixdfsi();
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 1;
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47dd8);
LAB_ram_4ff336e4:
  return (int)sVar1;
}


