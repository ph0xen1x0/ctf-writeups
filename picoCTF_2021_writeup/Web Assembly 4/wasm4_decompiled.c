export memory memory(initial: 2, max: 0);

global g_a:int = 66864;
export global input:int = 1072;
global dso_handle:int = 1024;
global data_end:int = 1328;
global global_base:int = 1024;
global heap_base:int = 66864;
global memory_base:int = 0;
global table_base:int = 1;

table T_a:funcref(min: 1, max: 1);

data d_a(offset: 1024) = 
  "\18j|a\118i7F[#\06fJV:\0d\1c\12/dd\11Vu\0fn\1b\068\07E\10/o?\13\02+\09"
  "^\00\00";

function wasm_call_ctors() {
}

export function strcmp(a:int, b:int):int {
  var c:int = g_a;
  var d:int = 32;
  var e:int = c - d;
  e[6]:int = a;
  e[5]:int = b;
  var f:int = e[6]:int;
  e[4]:int = f;
  var g:int = e[5]:int;
  e[3]:int = g;
  loop L_b {
    var h:ubyte_ptr = e[4]:int;
    var i:int = 1;
    var j:int = h + i;
    e[4]:int = j;
    var k:int = h[0];
    e[11]:byte = k;
    var l:ubyte_ptr = e[3]:int;
    var m:int = 1;
    var n:int = l + m;
    e[3]:int = n;
    var o:int = l[0];
    e[10]:byte = o;
    var p:int = e[11]:ubyte;
    var q:int = 255;
    var r:int = p & q;
    if (r) goto B_c;
    var s:int = e[11]:ubyte;
    var t:int = 255;
    var u:int = s & t;
    var v:int = e[10]:ubyte;
    var w:int = 255;
    var x:int = v & w;
    var y:int = u - x;
    e[7]:int = y;
    goto B_a;
    label B_c:
    var z:int = e[11]:ubyte;
    var aa:int = 255;
    var ba:int = z & aa;
    var ca:int = e[10]:ubyte;
    var da:int = 255;
    var ea:int = ca & da;
    var fa:int = ba;
    var ga:int = ea;
    var ha:int = fa == ga;
    var ia:int = 1;
    var ja:int = ha & ia;
    if (ja) continue L_b;
  }
  var ka:int = e[11]:ubyte;
  var la:int = 255;
  var ma:int = ka & la;
  var na:int = e[10]:ubyte;
  var oa:int = 255;
  var pa:int = na & oa;
  var qa:int = ma - pa;
  e[7]:int = qa;
  label B_a:
  var ra:int = e[7]:int;
  return ra;
}

export function check_flag():int {
  var a:int = g_a;
  var b:int = 16;
  var c:int = a - b;
  g_a = c;
  var d:int = 0;
  c[3]:int = d;
  loop L_b {
    var e:ubyte_ptr = c[3]:int;
    var f:int = e[1072];
    var g:int = 24;
    var h:int = f << g;
    var i:int = h >> g;
    if (eqz(i)) goto B_a;
    var j:int = 0;
    var k:int = c[3]:int;
    var l:int = k[1072]:ubyte;
    var m:int = 24;
    var n:int = l << m;
    var o:int = n >> m;
    var p:int = 20;
    var q:int = o ^ p;
    k[1072]:byte = q;
    var r:int = c[3]:int;
    var s:int = r;
    var t:int = j;
    var u:int = s > t;
    var v:int = 1;
    var w:int = u & v;
    if (eqz(w)) goto B_c;
    var x:int = c[3]:int;
    var y:int = 1;
    var z:ubyte_ptr = x - y;
    var aa:int = z[1072];
    var ba:int = 24;
    var ca:int = aa << ba;
    var da:int = ca >> ba;
    var ea:int = c[3]:int;
    var fa:int = ea[1072]:ubyte;
    var ga:int = 24;
    var ha:int = fa << ga;
    var ia:int = ha >> ga;
    var ja:int = ia ^ da;
    ea[1072]:byte = ja;
    label B_c:
    var ka:int = 2;
    var la:int = c[3]:int;
    var ma:int = la;
    var na:int = ka;
    var oa:int = ma > na;
    var pa:int = 1;
    var qa:int = oa & pa;
    if (eqz(qa)) goto B_d;
    var ra:int = c[3]:int;
    var sa:int = 3;
    var ta:ubyte_ptr = ra - sa;
    var ua:int = ta[1072];
    var va:int = 24;
    var wa:int = ua << va;
    var xa:int = wa >> va;
    var ya:int = c[3]:int;
    var za:int = ya[1072]:ubyte;
    var ab:int = 24;
    var bb:int = za << ab;
    var cb:int = bb >> ab;
    var db:int = cb ^ xa;
    ya[1072]:byte = db;
    label B_d:
    var eb:int = c[3]:int;
    var fb:int = 10;
    var gb:int = eb % fb;
    var hb:int = c[3]:int;
    var ib:int = hb[1072]:ubyte;
    var jb:int = 24;
    var kb:int = ib << jb;
    var lb:int = kb >> jb;
    var mb:int = lb ^ gb;
    hb[1072]:byte = mb;
    var nb:int = c[3]:int;
    var ob:int = 2;
    var pb:int = nb % ob;
    if (pb) goto B_f;
    var qb:int = c[3]:int;
    var rb:int = qb[1072]:ubyte;
    var sb:int = 24;
    var tb:int = rb << sb;
    var ub:int = tb >> sb;
    var vb:int = 9;
    var wb:int = ub ^ vb;
    qb[1072]:byte = wb;
    goto B_e;
    label B_f:
    var xb:int = c[3]:int;
    var yb:int = xb[1072]:ubyte;
    var zb:int = 24;
    var ac:int = yb << zb;
    var bc:int = ac >> zb;
    var cc:int = 8;
    var dc:int = bc ^ cc;
    xb[1072]:byte = dc;
    label B_e:
    var ec:int = c[3]:int;
    var fc:int = 3;
    var gc:int = ec % fc;
    if (gc) goto B_h;
    var hc:int = c[3]:int;
    var ic:int = hc[1072]:ubyte;
    var jc:int = 24;
    var kc:int = ic << jc;
    var lc:int = kc >> jc;
    var mc:int = 7;
    var nc:int = lc ^ mc;
    hc[1072]:byte = nc;
    goto B_g;
    label B_h:
    var oc:int = 1;
    var pc:int = c[3]:int;
    var qc:int = 3;
    var rc:int = pc % qc;
    var sc:int = rc;
    var tc:int = oc;
    var uc:int = sc == tc;
    var vc:int = 1;
    var wc:int = uc & vc;
    if (eqz(wc)) goto B_j;
    var xc:int = c[3]:int;
    var yc:int = xc[1072]:ubyte;
    var zc:int = 24;
    var ad:int = yc << zc;
    var bd:int = ad >> zc;
    var cd:int = 6;
    var dd:int = bd ^ cd;
    xc[1072]:byte = dd;
    goto B_i;
    label B_j:
    var ed:int = c[3]:int;
    var fd:int = ed[1072]:ubyte;
    var gd:int = 24;
    var hd:int = fd << gd;
    var id:int = hd >> gd;
    var jd:int = 5;
    var kd:int = id ^ jd;
    ed[1072]:byte = kd;
    label B_i:
    label B_g:
    var ld:int = c[3]:int;
    var md:int = 1;
    var nd:int = ld + md;
    c[3]:int = nd;
    continue L_b;
  }
  label B_a:
  var od:int = 0;
  c[1]:int = od;
  loop L_l {
    var pd:int = c[1]:int;
    var qd:int = c[3]:int;
    var rd:int = pd;
    var sd:int = qd;
    var td:int = rd < sd;
    var ud:int = 1;
    var vd:int = td & ud;
    if (eqz(vd)) goto B_k;
    var wd:int = c[1]:int;
    var xd:int = 2;
    var yd:int = wd % xd;
    if (yd) goto B_m;
    var zd:int = c[1]:int;
    var ae:int = 1;
    var be:int = zd + ae;
    var ce:int = c[3]:int;
    var de:int = be;
    var ee:int = ce;
    var fe:int = de < ee;
    var ge:int = 1;
    var he:int = fe & ge;
    if (eqz(he)) goto B_m;
    var ie:ubyte_ptr = c[1]:int;
    var je:int = ie[1072];
    c[11]:byte = je;
    var ke:int = c[1]:int;
    var le:int = 1;
    var me:ubyte_ptr = ke + le;
    var ne:int = me[1072];
    var oe:byte_ptr = c[1]:int;
    oe[1072] = ne;
    var pe:int = c[11]:ubyte;
    var qe:int = c[1]:int;
    var re:int = 1;
    var se:byte_ptr = qe + re;
    se[1072] = pe;
    label B_m:
    var te:int = c[1]:int;
    var ue:int = 1;
    var ve:int = te + ue;
    c[1]:int = ve;
    continue L_l;
  }
  label B_k:
  var we:int = 0;
  var xe:int = 1072;
  var ye:int = 1024;
  var ze:int = strcmp(ye, xe);
  var af:int = ze;
  var bf:int = we;
  var cf:int = af != bf;
  var df:int = -1;
  var ef:int = cf ^ df;
  var ff:int = 1;
  var gf:int = ef & ff;
  var hf:int = 16;
  var if:int = c + hf;
  g_a = if;
  return gf;
}

function copy(a:int, b:int) {
  var c:int = g_a;
  var d:int = 16;
  var e:int_ptr = c - d;
  e[3] = a;
  e[2] = b;
  var f:int = e[3];
  var g:byte_ptr = e[2];
  g[1072] = f;
}

